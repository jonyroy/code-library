#include<bits/stdc++.h>
using namespace std;
int a0[200005],a1[200005];
int main()
{
    string a,b;
    cin>>a>>b;
    int len1=a.length();
    int len2=b.length();
    int one=0,zero=0;
    long long int SubString=len2-len1+1,sum=0;
    for(int i=1; i<=len2; i++)
    {
        if(b[i-1]=='1')
        {
            a1[i]=a1[i-1]+1;
            a0[i]=a0[i-1];
        }
        else
        {
            a1[i]=a1[i-1];
            a0[i]=a0[i-1]+1;
        }
    }
    for(int i=0; i<len1; i++)
    {
        if(a[i]=='1')
        {
            sum+=(a0[i+SubString]-a0[i]);
        }
        else
        {
            sum+=(a1[i+SubString]-a1[i]);
        }
    }
    cout<<sum<<endl;
    return 0;
}

