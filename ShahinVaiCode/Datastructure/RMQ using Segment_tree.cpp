#include<bits/stdc++.h>
using namespace std;

#define max 10000
int arr[max];
int tree[3*max];
void segtree(int node,int l,int r)
{
    if(l==r)
    {
        tree[node]=l;
        return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    segtree(Left,l,mid);
    segtree(Right,mid+1,r);
    tree[node]=(arr[tree[Left]]<arr[tree[Right]])?tree[Left]:tree[Right];
}

long read(int node,int l,int r,int a,int b)
{
    if(l>b||r<a)//over bundory
    return 0;
    if(l>=a&&r<=b)
    return tree[node];

    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    int lb=read(Left,l,mid,a,b);
    int rb=read(Right,mid+1,r,a,b);
   return((arr[lb]<arr[rb])?lb:rb);
}
void update(int node,int l,int r,int p)
{
    if(arr[p]<arr[tree[node]])
    tree[node]=p;
    if(l==r)
    return;
    int Left=node*2;
    int Right=node*2+1;
    int mid=(l+r)/2;
    if(p>=l&&p<=mid)
    update(Left,l,mid,p);
    else
    update(Right,mid+1,r,p);

}

int main(){
    int n,i,a,b,v,p;
    arr[0]=10000000;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    segtree(1,1,n);
    cin>>a>>b;//minimum value of range a to b
    cout<<read(1,1,n,a,b)<<endl;
    cin>>v>>p;
    arr[p]=v;
    update(1,1,n,p);
    cin>>a>>b;//minimum value of range a to b
    cout<<read(1,1,n,a,b)<<endl;

return 0;
}
