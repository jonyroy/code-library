#include<bits/stdc++.h>
using namespace std;
int a0[200005],a1[200005],b0[200005],b1[200005];
int main()
{
    string a,b;
    cin>>a>>b;
    int len1=a.length();
    int len2=b.length();
    int i=0,j=len2-1;
    int lone=0,lzero=0,rone=0,rzero=0;
    int l=0,k=len1-1;
    while(i<=j)
    {
        if(a[l]=='1'&&l<len1)
            lone++;
        else if(a[l]=='0'&&l<len1)
            lzero++;
        if(a[k]=='1'&&k>=0)
            rone++;
        else if(a[k]=='0'&&k>=0)
            rzero++;

        if(k<len1-1)
        {
            int t=len1-1-k;
            int q=len2-1-t;
            a0[i]=lzero-a0[--t];
            a1[i]=lone-a1[--t];
            b0[j]=rzero-b0[--q];
            b1[j]=rone-b1[--q];
        }
        else
        {
            a0[i]=lzero;
            a1[i]=lone;
            b0[j]=rzero;
            b1[j]=rone;
        }
        i++;
        j--;
        l++;
        k--;
    }
    int sum=0;
    for(int r=0;r<len2;r++)
    {
        if(b[r]=='1')
            sum+=(a0[r]+b0[r]);
        if(b[r]=='0')
            sum+=(a1[r]+b1[r]);
    }
    cout<<sum;
    return 0;
}

