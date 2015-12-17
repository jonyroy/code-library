#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1100],b[1100];
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        if(i<n)
        a[i]=m;
        if(i>1)
        b[i-1]=m;
    }
    for(int i=1;i<n;i++)
    {
        int mm=min(a[i],b[i]),nn=max(a[i],b[i]);
        for(int j=i+1;j<n;j++)
        {
               int mmm=min(a[j],b[j]),nnn=max(a[j],b[j]);
               if((mm>=mmm&&nn<=nnn)||mmm>=mm&&nnn<=nn)
                ;
               else if(nn<=mmm||nnn<=mm)
                ;
               else if(mm>=nnn||mmm>=nn)
                ;
               else
               {
                   cout<<"yes\n";
                   return 0;
               }
        }
    }
    cout<<"no\n";
    return 0;
}
