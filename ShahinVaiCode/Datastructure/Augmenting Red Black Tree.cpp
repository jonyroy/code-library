//Augmenting Red Black Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
#define max_s 1432005
int p[max_s],Left[max_s],Right[max_s],key[max_s],color[max_s];
int Red=1,Black=0,nil=0,root=0,Rank[max_s];

int os_select(int x,int i)//find ith position node
{
    int r=Rank[Left[x]]+1;
    if(i==r)
    return x;
    else if(i<r)
    return os_select(Left[x],i);
    else
    return os_select(Right[x],i-r);
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

    Rank[x]=Rank[Left[x]]+Rank[Right[x]]+1;
    Rank[y]=Rank[Left[y]]+Rank[Right[y]]+1;
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
    Rank[y]=Rank[Left[y]]+Rank[Right[y]]+1;
    Rank[x]=Rank[Left[x]]+Rank[Right[x]]+1;
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
    Rank[z]=nil;
    y=z;
    while(y!=nil)
    {
        Rank[y]=Rank[Left[y]]+Rank[Right[y]]+1;
        y=p[y];
    }
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
    int y=z,x,r;
    int ycolor=color[y];
    if(Left[z]==nil)
    {
        x=Right[z];
        r=p[z];
        transplant(z,Right[z]);
    }
    else if(Right[z]==nil)
    {
        x=Left[z];
        r=p[z];
        transplant(z,Left[z]);
    }
    else
    {
       int y=minimum(Right[z]);
       ycolor=color[y];
       x=Right[y];
        if(p[y]==z)
        {
            p[x]=y;
            r=y;
        }
        else
        {
            r=p[y];
            transplant(y,Right[y]);
            Right[y]=Right[z];
            p[Right[y]]=y;
        }
        transplant(z,y);
        Left[y]=Left[z];
        p[Left[y]]=y;
        color[y]=color[z];
    }
    y=r;
    while(y!=nil)
    {
        Rank[y]=Rank[Left[y]]+Rank[Right[y]]+1;
        y=p[y];
    }
    if(ycolor==Black)
    Delete_fixup(x);

}
int cnt=0;
void print(int x)
{
    if(x!=nil)
    {

        print(Left[x]);
        if(cnt<50)
         {printf("%d ",key[x]);
         cnt++;
         }
        print(Right[x]);
    }
}
int main(){

    int n=max_s-3,i,j=1,x,t,rv,p;

    for(i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            key[j]=i;
            insert(j);
            j++;
        }
    }

    for(i=2;i<=Rank[root];i++)
    {
            p=os_select(root,i);

            p=key[p];
            rv=1;
           // cout<<p<<" ";
            while(p*rv-rv+1<=Rank[root])
            {

                x=os_select(root,p*rv-rv+1);
                if(x!=nil)
                deleted(x);
                rv++;
            }
    }

   // print(root);
  // cout<<Rank[root]<<endl;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>x;
        x=os_select(root,x);
        cout<<"Case "<<i<<": "<<key[x]<<endl;
    }

    return 0;
}


