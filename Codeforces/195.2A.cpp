#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x1,x2,y1,y2;
    cin>>a>>b;
    if(a>0&&b>0)
    {
        cout<<0<<" "<<a+b<<" "<<a+b<<" "<<0<<endl;
    }
    else if(a<0&&b<0)
    {
        cout<<a+b<<" "<<0<<" "<<0<<" "<<a+b<<endl;
    }
    else if(a>0&&b<0)
    {
        a=a*(-1);
        cout<<0<<" "<<a+b<<" "<<(-1)*(a+b)<<" "<<0<<endl;
    }
    else if(a<0&&b>0)
    {
        b=b*(-1);
        cout<<a+b<<" "<<0<<" "<<0<<" "<<(-1)*(a+b)<<endl;
    }
    return 0;
}
