#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l=0,h=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        {
            int m;
        cin>>m;
        if(m==5)
            l++;
        else
            h++;
        }
  if(l/9&&h>0)
  {
      int k=l/9;
      l=k*9;
      for(int i=1;i<=l;i++)
        cout<<"5";
        for(int i=1;i<=h;i++)
       cout<<"0";
  }
  else if(l/9==0&&h>0)
    cout<<"0";
  else
    cout<<"-1";
  cout<<endl;
    return 0;
}
