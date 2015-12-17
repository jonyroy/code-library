//Segment_tree_with Lazy Propagation...
#include<bits/stdc++.h>
using namespace std;
#define max 10000
int arr[max];
int tree[3*max];
int add[3*max];
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
long read(int node,int l,int r,int i,int j,long int add_)
{
    if(l>j||r<i)//over bundory
    return 0;
    if(l>=i&&r<=j)
    return(tree[node]+(r-l+1)*add_);

    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;

    return(read(Left,l,mid,i,j,add[Left]+add_)+read(Right,mid+1,r,i,j,add[Right]+add_));
}
int cal(int l,int r,int a,int b)
{
    int la,rb;
    la=(l>a)?l:a;
    rb=(r<b)?r:b;
    return rb-la+1;
}
void update_with_lazypropagation(int node,int l,int r,int val,int a,int b)
{
    if(r<a||l>b)
    return;
    if(l>=a&&r<=b)
    {
        add[node]+=val;
        return;
    }
    tree[node]+=val*cal(l,r,a,b);

    if(l==r)
    return;
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    update_with_lazypropagation(Left,l,mid,val,a,b);
    update_with_lazypropagation(Right,mid+1,r,val,a,b);

}
int main(){
    int n;
    cin>>n;
    LPI(i,n)
    {
        cin>>arr[i+1];
    }
    segtree(1,1,n);

return 0;
}
