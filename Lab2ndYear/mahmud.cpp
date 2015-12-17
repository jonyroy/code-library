#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
int main()
{
    int n,a[100001],p,c=0,mm;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    int j=0;
    for(int i=1;i<n;i++)
    {
        if(a[i]>0)
        {
        p=a[i];
        for(int k=1;k<=p;k++)
        {
            i++;
            if(a[i]>0)
                {
                mm=a[i];
            for(int s=1;s<=mm;s++)
            {
                i++;
            }
                }
        }
        }
        else
        j++;
    }
    cout<<j<<endl;
    return 0;
}
