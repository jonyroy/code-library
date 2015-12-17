#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<utility>
#include<cmath>
#include<algorithm>
using namespace std;
int a[1000]={-10},tree[3000];
int binary_tree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=b;
        return 0;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    binary_tree(left,b,mid);
    binary_tree(right,mid+1,e);
    if(a[tree[left]]>=a[tree[right]])
    tree[node]=tree[left];
    else
    tree[node]=tree[right];
}
int update(int node,int b,int e,int i,int newvalue)
{
    if(i<b||i>e)
        return 0;
    if(b>=i&&e<=i)
    {
        a[i]=newvalue;
        tree[node]=i;
        return 0;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,newvalue);
    update(right,mid+1,e,i,newvalue);
    if(a[tree[left]]>=a[tree[right]])
    tree[node]=tree[left];
    else
    tree[node]=tree[right];
}
int query(int node,int b,int e,int i,int j)
{
    if(b>j||e<i)
    return 0;
    if(b>=i&&e<=j)
    return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    if(a[p1]>=a[p2])
        return p1;
    else
        return p2;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    cin>>a[i];
    binary_tree(1,1,n);
    int g,h;
    cin>>g>>h;
    int m=query(1,1,n,g,h);
    cout<<m<<endl;
    cout<<"Update Value=";
    int v,j;
    cin>>j>>v;
    update(1,1,n,j,v);
    cin>>g>>h;
    int l=query(1,1,n,g,h);
    cout<<l<<endl;
    return 0;
}
