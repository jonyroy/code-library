#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    cin>>x1>>y1>>x2>>y2;
    if(x1==x2)
    {
        int b=abs(y1-y2);
        b+=x1;
        cout<<b<<" "<<y1<<" "<<b<<" "<<y2;
        return 0;
    }
    if(y1==y2)
    {
        int b=abs(x1-x2);
        b+=y1;
        cout<<x1<<" "<<b<<" "<<x2<<" "<<b;
        return 0;
    }
    int a=abs(x1-x2),b=abs(y1-y2);
    if(a==b)
    {
        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        return 0;
    }
    cout<<"-1";
    return 0;
}
