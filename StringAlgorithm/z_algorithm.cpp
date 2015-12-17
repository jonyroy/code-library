#include<bits/stdc++.h>
using namespace std;
int Z[100000];
int main()
{
  string s;
  int L,R;
  int maximum=0,position=0;
  L=R=0;
  cin>>s;
  int len=s.length();
  for(int i=1;i<len;i++)
  {
      if(i>R)
      {
          L=R=i;
          while(R<len&&s[R-L]==s[R])
            R++;
          Z[i]=R-L;
          if(maximum<Z[i])
          {
              maximum=Z[i];
              position=i;
          }
          R--;
      }
      else
      {
          int k=i-L;
          if(Z[k]<R-i+1)
            Z[i]=Z[k];
          else
          {
              L=i;
              while(R<len&&s[R-L]==s[R])
                R++;
              Z[i]=R-L;
              if(maximum<Z[i])
              {
              maximum=Z[i];
              position=i;
              }
              R--;
          }
      }
  }
  if(maximum>0)
  {
      cout<<position<<" "<<maximum<<endl;
      for(int i=position;i<maximum+position;i++)
        cout<<s[i];
  }
  return 0;
}
