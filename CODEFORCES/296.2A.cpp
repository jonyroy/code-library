#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,cnt=0,temp;
    cin>>a>>b;
    while(1)
    {
        if(a==0||b==0)
            break;
      cnt+=(a/b);
      temp=b;
      b=a%b;
      a=temp;
    }
    cout<<cnt;
    return 0;
}
