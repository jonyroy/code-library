//Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
#define max_s 1000
int p[max_s],Left[max_s],Right[max_s],key[max_s],nil=0,root=0;
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
}
void transplant(int u,int v)
{
    if(p[u]==nil)
    root=v;
    else if(u==Left[p[u]])
    Left[p[u]]=v;
    else
    Right[p[u]]=v;
    if(v!=nil)
    p[v]=p[u];
}
void deleted(int z)
{
    if(Left[z]==nil)
    transplant(z,Right[z]);
    else if(Right[z]==nil)
    transplant(z,Left[z]);
    else
    {
       int y=minimum(Right[z]);
        if(p[y]!=z)
        {
            transplant(y,Right[y]);
            Right[y]=Right[z];
            p[Right[y]]=y;
        }
        transplant(z,y);
        Left[y]=Left[z];
        p[Left[y]]=y;
    }
}
void print(int x)
{
    if(x!=nil)
    {
        print(Left[x]);
        printf("%d ",key[x]);
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


