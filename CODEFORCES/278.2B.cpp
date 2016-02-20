#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10];
    cin>>n;
    if(n==0)
    {
        cout<<"YES\n1\n2\n2\n3\n";
        return 0;
    }
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(n==1)
    {
        cout<<"YES\n";
        int m=a[1]+3*a[1];
        int b=m%2;
            cout<<m/2<<endl;
            cout<<m/2+b<<endl;
            cout<<3*a[1]<<endl;
            return 0;
    }
    sort(a+1,a+n+1);
    if(n==2)
    {

        if(4*a[1]-a[2]<=3*a[1]&&4*a[1]-a[2]>=a[2])
        {
            cout<<"YES\n";
            cout<<4*a[1]-a[2]<<endl;
            cout<<3*a[1]<<endl;
            return 0;
        }
        int b=4*a[1]-a[2];
        if(b<=a[2]&&b>=a[1]&&a[2]<=3*a[1])
        {
            cout<<"YES\n";
            cout<<4*a[1]-a[2]<<endl;
            cout<<3*a[1]<<endl;
            return 0;
        }
        b=a[1]+a[2];
        if(a[2]/3==a[1])
        {
            int m=b%2;
            cout<<b/2<<endl;
            cout<<b/2+b<<endl;
            return 0;
        }
        if(b%4==0&&3*(b/4)>=a[2])
        {
            cout<<"YES\n";
            cout<<b/4<<endl;
            cout<<3*(b/4)<<endl;
            return 0;
        }
        b=4*a[2]-3*a[1];
        if(b%3==0&&a[2]%3==0&&a[2]/3<=a[1])
        {
            cout<<"YES\n";
            cout<<b/3<<endl;
            cout<<a[2]/3<<endl;
            return 0;
        }
        if(b%3==0&&b/3<=a[1])
        {
            cout<<"YES\n";
            cout<<b/3<<endl;
            cout<<a[2]/3<<endl;
            return 0;
        }
        cout<<"NO\n";
    }
    if(n==3)
    {
        int b;
        b=a[2]+a[3]-a[1];
        if(b>=a[3]&&b-a[1]>0&&b==a[1]*3)
        {
            cout<<"YES\n";
            cout<<b<<endl;
            return 0;
        }
        b=a[1]+a[3]-a[2];
        if(b>=a[1]&&b<=a[2]&&a[3]-a[1]>0&&3*a[1]==a[3])
        {
            cout<<"YES\n";
            cout<<b<<endl;
            return 0;
        }
        b=a[1]+a[2]-a[3];
        if(b<=a[1]&&b>0&&a[3]-b>0&&a[3]/3==b)
        {
            cout<<"YES\n";
            cout<<b<<endl;
            return 0;
        }
        cout<<"NO\n";
    }
    if(n==4)
    {
        if(3*a[1]==a[4]&&a[2]+a[3]==a[1]+a[4]&&a[3]<=a[4]&&a[3]>=a[2]&&a[2]>=a[1]&&a[2]<=a[3])
        {
            cout<<"YES\n";
            return 0;
        }
        cout<<"NO\n";
    }
    return 0;
}
