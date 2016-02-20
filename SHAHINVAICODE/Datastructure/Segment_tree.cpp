//Segment Tree.........
#include<bits/stdc++.h>
using namespace std;
#define max 10000
int arr[max];
int tree[3*max];
void segtree(int node,int l,int r)
{
    if(l==r)
    {
        tree[node]=arr[l];
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    segtree(Left,l,mid);
    segtree(Right,mid+1,r);
    tree[node]=tree[Left]+tree[Right];
}
int a,b;
long read(int node,int l,int r)
{
    if(l>b||r<a)//over bundory
    return 0;
    if(l>=a&&r<=b)
    return tree[node];

    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;

    return(read(Left,l,mid)+read(Right,mid+1,r));
}
void update(int node,int l,int r,int val,int p)
{

    tree[node]+=val;
    if(l==r)
    return;
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    if(p>=l&&p<=mid)
    update(Left,l,mid,val,p);
    else
    update(Right,mid+1,r,val,p);

}

int main(){
    int n,i,v,p;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    segtree(1,1,n);
    cin>>a>>b;//sum of range a to b
    cout<<read(1,1,n)<<endl;
    cin>>v>>p;
    update(1,1,n,v,p);
    cin>>a>>b;//sum of range a to b
    cout<<read(1,1,n)<<endl;

return 0;
}
