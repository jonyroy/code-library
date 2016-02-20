#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a[205],b[205],kn;
     cin>>n>>kn;
     int knt=-1000000;
     b[0]=0;
     for(int i=1;i<=n;i++)
     {
         cin>>a[i];
         b[i]=b[i-1]+a[i];
     }
     for(int i=0;i<n;i++)
     {
         for(int j=i+1;j<=n;j++)
         {
             int cnt=b[j]-b[i];

             vector<int>m,km;
             for(int k=i+1;k<=j;k++)
             {
               m.push_back(a[k]);
             }
             for(int k=1;k<=i;k++)
                km.push_back(a[k]);
             for(int k=j+1;k<=n;k++)
                km.push_back(a[k]);
             sort(m.begin(),m.end());
             sort(km.begin(),km.end());
             int lenM=m.size();
             int lenKM=km.size(),vx=0,vy;
             vy=lenKM-1;
             for(int k=1;k<=kn;k++)
             {
                if(lenM&&lenKM)
                {
                  if(m[vx]<km[vy])
                  {
                      if(m[vx]<0)
                      {
                          cnt-=m[vx];
                          cnt+=km[vy];
                      }
                      else
                      {
                          cnt-=m[vx];
                          cnt+=km[vy];
                      }
                      vx++,vy--;
                      lenM--,lenKM--;
                  }
                }
                else
                    {
                    knt=max(cnt,knt);
                    break;
                    }
                knt=max(cnt,knt);
             }

         }
     }
     cout<<knt<<endl;
    return 0;
}
