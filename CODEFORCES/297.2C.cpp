#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,m=-1,mi=1000001;
  int ar[1000005]={0};
  bool test[1000005]={false};
  cin>>n;
  for(int i=1;i<=n;i++)
  {
      long long int cnt;
      cin>>cnt;
      m=max(m,cnt);
      mi=min(mi,cnt);
      ar[cnt]++;
  }
  long long int area=0;
  long long int k=m+1,knt=0;
  for(int i=m;i>=mi-1;i--)
  {
      if(ar[i])
      {
        int pnt=ar[i]%2;
        if((pnt&&test[i]&&ar[i]>=2)||(test[i]==false&&pnt))
        {
          ar[i-1]++;
          test[i-1]=true;
        }
        long long int cnt=ar[i]/2;
        if(knt>0&&cnt>0)
        {
            area=area+(min(knt,cnt)*k*i);
            if(knt>=cnt)
                knt=knt-cnt;
            else
            {
               cnt=cnt-knt;
               area=area+(cnt/2)*i*i;
               knt=cnt%2;
               k=i;
            }

        }
        else if(knt==0&&cnt>0)
        {
            area=area+(cnt/2)*i*i;
            knt=cnt%2;
            k=i;
        }
       }
  }
  cout<<area<<endl;
  return 0;
}
