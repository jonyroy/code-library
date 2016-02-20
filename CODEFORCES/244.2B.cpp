#include<bits/stdc++.h>
using namespace std;
int arr[200050],tree[600050];
void bitree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        return;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    bitree(left,b,mid);
    bitree(right,mid+1,e);
    tree[node]=max(tree[left],tree[right]);
}
int query(int node,int b,int e,int i,int j)
{
    if(i>e||j<b)
        return 0;
    if(b>=i&&e<=j)
        return tree[node];
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    int p1=query(left,b,mid,i,j);
    int p2=query(right,mid+1,e,i,j);
    return max(p1,p2);
}
int main()
{
    int n,t,c,cnt=0;
    cin>>n>>t>>c;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    bitree(1,1,n);
    for(int i=1;i<=n-c+1;i++)
    {
    int b=query(1,1,n,i,i+c-1);
    if(t>=b)
    cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}

