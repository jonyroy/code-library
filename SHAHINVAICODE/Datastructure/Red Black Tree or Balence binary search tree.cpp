//Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
#define max_s 1000
int p[max_s],Left[max_s],Right[max_s],key[max_s],color[max_s];
int Red=1,Black=0,nil=0,root=0;
int search(int x,int k)
{
    while(key[x]!=nil&&k!=key[x])
    {
        if(k<key[x])
        x=Left[x];
        else
        x=Right[x];
    }
    return x;
}
int minimum(int x)
{
    while(Left[x]!=nil)//-1 mean null
    {
        x=Left[x];
    }
    return x;
}
int maximum(int x)
{
    while(Right[x]!=nil)
    {
        x=Right[x];
    }
    return x;
}
//successor of a node x is the node with the smallest key
//greater than x.key.
int successor(int x)
{
    if(Right[x]!=nil)
    return minimum(Right[x]);
    int  y=p[x];
    while(y!=nil && x==Right[y])
    {
        x=y;
        y=p[y];
    }
    return y;
}
void left_rotate(int x)
{
    int y=Right[x];
    Right[x]=Left[y];
    if(Left[y]!=nil)
     p[Left[y]]=x;
    p[y]=p[x];
    if(p[x]==nil)
    root=y;
    else if(x==Left[p[x]])
    Left[p[x]]=y;
    else
    Right[p[x]]=y;
    Left[y]=x;
    p[x]=y;
}
void right_rotate(int y)
{
    int x=Left[y];
    Left[y]=Right[x];
    if(Left[y]!=nil)
    p[Left[y]]=y;
    p[x]=p[y];
    if(p[x]==nil)
    root=x;
    else if(Left[p[y]]==y)
    Left[p[y]]=x;
    else
    Right[p[y]]=x;
    Right[x]=y;
    p[y]=x;
}
void Insert_fixup(int z)
{
    int y;
    while(color[p[z]]==Red)
    {
        if(p[z]==Left[p[p[z]]])
        {
            y=Right[p[p[z]]];
            if(color[y]==Red)
            {
                color[p[z]]=Black;
                color[y]=Black;
                color[p[p[z]]]=Red;
                z=p[p[z]];
            }
            else
            {
                if(z==Right[p[z]])
                {
                    z=p[z];
                    left_rotate(z);
                }
                color[p[z]]=Black;
                color[p[p[z]]]=Red;
                right_rotate(p[p[z]]);
            }
        }
        else
        {
            y=Left[p[p[z]]];
            if(color[y]==Red)
            {
                color[p[z]]=Black;
                color[y]=Black;
                color[p[p[z]]]=Red;
                z=p[p[z]];
            }
            else
            {
                if(z==Left[p[z]])
                {
                    z=p[z];
                    right_rotate(z);
                }
                color[p[z]]=Black;
                color[p[p[z]]]=Red;
                left_rotate(p[p[z]]);
            }
        }
    }
    color[root]=Black;
}
//z.key=v,z.Left=nill,z.Right=nill;
void insert(int z)
{
   int  y=nil;
   int  x=root;
    while(x!=nil)
    {
        y=x;
        if(key[z]<key[x])
        x=Left[x];
        else
        x=Right[x];
    }
    p[z]=y;
    if(y==nil)
    root=z;// tree was empty
    else if(key[z]<key[y])
    Left[y]=z;
    else
    Right[y]=z;
    Left[z]=nil;
    Right[z]=nil;
    color[z]=Red;
    Insert_fixup(z);
}
void transplant(int u,int v)
{
    if(p[u]==nil)
    root=v;
    else if(u==Left[p[u]])
    Left[p[u]]=v;
    else
    Right[p[u]]=v;

    p[v]=p[u];
}
void Delete_fixup(int x)
{
    int w;
    while(x!=root&&color[x]==Black)
    {
        if(x==Left[p[x]])
        {
            w=Right[p[x]];
            if(color[w]==Red)
            {
                color[w]=Black;
                color[p[x]]=Red;
                left_rotate(p[x]);
                w=Right[p[x]];
            }
            if(color[Left[w]]==Black&&color[Right[w]]==Black)
            {
                color[w]=Red;
                x=p[x];
            }
            else
            {
                if(color[Right[w]]==Black)
                {
                    color[Left[w]]=Black;
                    color[w]=Red;
                    right_rotate(w);
                    w=Right[p[x]];
                }
                color[w]=color[p[x]];
                color[p[x]]=Black;
                color[Right[w]]=Black;
                left_rotate(p[x]);
                x=root;
            }
        }
        else
        {
            w=Left[p[x]];
            if(color[w]==Red)
            {
                color[w]=Black;
                color[p[x]]=Red;
                right_rotate(p[x]);
                w=Left[p[x]];
            }
            if(color[Right[w]]==Black&&color[Left[w]]==Black)
            {
                color[w]=Red;
                x=p[x];
            }
            else
            {
                if(color[Left[w]]==Black)
                {
                    color[Right[w]]=Black;
                    color[w]=Red;
                    left_rotate(w);
                    w=Left[p[x]];
                }
                color[w]=color[p[x]];
                color[p[x]]=Black;
                color[Left[w]]=Black;
                right_rotate(p[x]);
                x=root;
            }
        }
    }
    color[x]=Black;
}
void deleted(int z)
{
    int y=z,x;
    int ycolor=color[y];
    if(Left[z]==nil)
    {
        x=Right[z];
        transplant(z,Right[z]);
    }
    else if(Right[z]==nil)
    {
        x=Left[z];
        transplant(z,Left[z]);
    }
    else
    {
       int y=minimum(Right[z]);
       ycolor=color[y];
       x=Right[y];
        if(p[y]==z)
        p[x]=y;
        else
        {
            transplant(y,Right[y]);
            Right[y]=Right[z];
            p[Right[y]]=y;
        }
        transplant(z,y);
        Left[y]=Left[z];
        p[Left[y]]=y;
        color[y]=color[z];
    }
    if(ycolor==Black)
    Delete_fixup(x);
}
void print(int x)
{
    if(x!=nil)
    {
        printf("%d ",key[x]);
        print(Left[x]);
        print(Right[x]);
    }
}
int main(){

    int n,i,v,y;

    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>key[i];
        insert(i);
    }
    print(root);
    cout<<endl;
    cout<<"Enter value for Search. ";
    cin>>v;
    y=search(root,v);
    if(y==nil)
    cout<<"Value not found"<<endl;
    else
    cout<<"Value found"<<endl;
    cout<<"Enter value for Delete. ";
    cin>>v;
    y=search(root,v);
    if(y!=nil)
    deleted(y);
    print(root);
    return 0;
}


