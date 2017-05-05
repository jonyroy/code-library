#include<bits/stdc++.h>
using namespace std;
long int tree[90000],a[30005];
long int binary_tree(int node,int left,int right)
{
    if(left==right)
    {
        tree[node]=a[left];
        return 0;
    }
    int mid=(left+right)/2;
    binary_tree(2*node,left,mid);
    binary_tree(2*node+1,mid+1,right);
    tree[node]=
}
int main()
{

}
