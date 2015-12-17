#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b;
    int carry=0;
    int m=max(a.size(),b.size());
    a.reverse();
    b.reverse();
    for(int i=0;i<m;i++)
    {
        if(a[i]>='0'&&a[i]<='9'&&b[i]>='0'&&b[i]<='9')
            {
            int sum=a[i]-48+b[i]-48+carry;
            carry=sum/10;
            sum=sum%10;
            c+=(sum-48);
            }
    }
}
