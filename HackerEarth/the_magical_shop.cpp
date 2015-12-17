#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int a,b;
    string s;
    cin>>a>>b;
    cin>>s;
    long long int sum;
    if(s[0]=='1'){
            sum=a;
    sum=sum%b;
    }
    else
        sum=0;
    for(long int i=1;i<s.size();i++)
    {
       if(s[i]=='1')
       {
           sum=(sum*sum);
           sum+=a;
           sum=sum%b;
       }
       else
        sum=(sum*sum)%b;
    }
    cout<<sum<<endl;
    return 0;
}
