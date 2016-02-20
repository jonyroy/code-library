#include<bits/stdc++.h>
using namespace std;
typedef vector<pair<int,int> > VI;
typedef vector<pair<long int,long int> > VII;
typedef map<string,int>StoI;
typedef long long int LL;
int tree[4000],input[1000];
int segment_tree(int node,int left,int right)
{
    if(left==right)
    {
       tree[node]=input[left];
       return 0;
    }
    int mid=(left+right)/2;
    segment_tree(2*node,left,mid);
    segment_tree(2*node+1,mid+1,right);
    tree[node]=min(tree[2*node],tree[2*node+1]);
}
int update(int node,int left,int right,int i,int v)
{
    if(i==left&&i==right)
    {
      tree[node]=v;
      return 0;
    }
    if(left>i||right<i)
        return 0;
    int mid=(left+right)/2;
    update(node*2,left,mid,i,v);
    update(node*2+1,mid+1,right,i,v);
    tree[node]=min(tree[node*2],tree[node*2+1]);
}
int segment_query(int node,int left,int right,int i,int j)
{
    if(left>j||right<i)
        return 0;
    if(left>=i&&right<=j)
        return tree[node];
    int mid=(left+right)/2;
    int sum1=segment_query(2*node,left,mid,i,j);
    int sum2=segment_query(2*node+1,mid+1,right,i,j);
    return min(sum1,sum2);
}
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    cin>>input[i];
    segment_tree(1,1,n);
    for(int i=1;i<=m;i++)
    {
        int cnt,cn,vn;

        cin>>vn>>cnt>>cn;
        if(vn==1)
        {
        int sum=segment_query(1,1,n,cnt,cn);
        cout<<sum<<endl;
        }
        else
        update(1,1,n,cnt,cn);
    }
    return 0;
}
