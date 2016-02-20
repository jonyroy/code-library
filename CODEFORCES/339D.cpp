#include<bits/stdc++.h>
using namespace std;
int arr[131172],tree[2*131072];
bool m[2*131072];
bool bitree(int node,int b,int e)
{
    if(b==e)
    {
        tree[node]=arr[b];
        m[node]=true;
        return true;
    }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    bool test=bitree(left,b,mid);
    bool tes=bitree(right,mid+1,e);
    if(test&&tes)
    {
    tree[node]=(tree[left]|tree[right]);
    m[node]=!test;
    }
    else
    {
    tree[node]=(tree[left]^tree[right]);
    m[node]=!test;
    }
    return !test;
}
bool update(int node,int b,int e,int i,int newvalue)
{
    if (i > e || i < b)
        return m[node];
    if (b >= i && e <= i)
        {
        tree[node]=newvalue;
        return true;
        }
    int left=node*2;
    int right=node*2+1;
    int mid=(b+e)/2;
    bool test=update(left,b,mid,i,newvalue);
    bool tes=update(right,mid+1,e,i,newvalue);
    if(test&&tes)
    tree[node]=(tree[left]|tree[right]);
    else
    tree[node]=(tree[left]^tree[right]);
    return !test;
}
int main()
{
    int n,m;
    cin>>n>>m;
    double b=pow(2,n);
    int nn=(int)b;
    for(int i=1;i<=nn;i++)
    {
        cin>>arr[i];
    }
    bitree(1,1,nn);
    for(int i=1;i<=m;i++)
    {
        int p,b;
        cin>>p>>b;
        update(1,1,nn,p,b);
        cout<<tree[1]<<endl;
    }
    return 0;
}
