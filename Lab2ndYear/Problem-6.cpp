//Everyone Out Of The Pool
#include<bits/stdc++.h>
using namespace std;
class Pool
{
    int a,b;
public:
    bool input();
    int output();
    bool issquare(int);
};
bool Pool::input()
{
    cin>>a>>b;
    if(a==0&&b==0)
        return false;
    return true;
}
bool Pool::issquare(int n)
{
    int m=(int)sqrt(n);
    if(m*m==n)
        return true;
    else
        return false;
}
int Pool::output()
{
    int c=0;
    int d=(int)sqrt(a)+1;
    while(d*d<b)
    {
    if(d*d>a&&d*d<b)
    {
        int g=d*d-1;
        int h=g*2*4+1;
        if(issquare(h))
            c++;
    }
    d++;
    }
    return c;
}
int main()
{
    Pool a;
    int i=1;
    while(a.input())
    {
        cout<<"Case "<<i<<": ";
        cout<<a.output()<<endl;;
        i++;
    }
    return 0;
}
