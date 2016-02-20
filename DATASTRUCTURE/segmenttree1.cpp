#include<bits/stdc++.h>
using namespace std;
    int a[1000],tree[3000];
    int binary_tree(int node,int b,int e)
    {
        if(b==e)
        {
           tree[node]=a[b];
           return 0;
        }
        int left=node*2;
        int right=node*2+1;
        int mid=(b+e)/2;
        binary_tree(left,b,mid);
        binary_tree(right,mid+1,e);
        tree[node]=tree[left]+tree[right];
    }
    int update(int node,int b,int e,int i,int newvalue)
    {
         if(b>i||i>e)
         return 0;
         if(b==e)
         {
            tree[node]=newvalue;
            return 0;
         }
         int left=node*2;
         int right=node*2+1;
         int mid=(b+e)/2;
         update(left,b,mid,i,newvalue);
         update(right,mid,e,i,newvalue);
         tree[node]=tree[left]+tree[right];
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
        return p1+p2;
    }
    int main()
    {
        int n,m;
        scanf("%d%d",&n,&m);
        for(int i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        binary_tree(1,1,n);
        for(int k=1;k<=m;k++)
        {
        int i,j;
        scanf("%d%d",&i,&j);
        int m=query(1,1,n,i,j);
        printf("%d\n",m);
        }
        return 0;
    }
