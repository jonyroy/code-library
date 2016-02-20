#include<bits/stdc++.h>
using namespace std;
int arr[300009];
bool tree[4*300000]={false};
void update(int node,int b,int e,int i,int j,int value)
{
    if(b>j||e<i)
        return;
    if(tree[node])
        return;
    if(b==e)
    {
           if(arr[b])
           return;
           if(b==value)
            {
                tree[node]=false;
                return;
            }
           arr[b]=value;
           tree[node]=true;
           return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    update(left,b,mid,i,j,value);
    update(right,mid+1,e,i,j,value);
    if(tree[left]&&tree[right])
    tree[node]=true;
}
int main()
{
    int n,m,l,r,x;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>l>>r>>x;
        update(1,1,n,l,r,x);
    }
    for(int i=1;i<=n;i++)
    cout<<arr[i]<<" ";
}
