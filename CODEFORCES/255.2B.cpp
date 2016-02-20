#include<bits/stdc++.h>
using namespace std;
int main()
{
     int sum=0,mx=0,a[1005];
     int n,b[30];
     string s;
     cin>>s>>n;
     for(int i=1;i<=26;i++)
     {
       cin>>b[i];
       mx=max(mx,b[i]);
     }
     a[0]=0;
     for(int i=1;i<=s.size();i++)
     {
         a[i]=a[i-1]+(i*b[s[i-1]-96]);
     }
     int j=0,g=0,popo;
     popo=n*mx;
     //cout<<"popo="<<popo<<endl;
     for(int i=1;i<=n;i++)
     g+=(i*mx);
     //cout<<"g="<<g<<endl;
     int len=s.size();
     int mul=0,r=0;
     for(int i=0;i<=len;i++)
     {
           sum=g;
           mul=n+i+1;
           if(i-1>=0)
           sum+=a[i];
           for(int j=i;j<len;j++)
           {
                sum+=(mul*b[s[j]-96]);
                mul++;
           }
           r=max(r,sum);
           g+=popo;
     }
     cout<<r<<endl;
     return 0;
}
