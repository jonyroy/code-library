#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r1,r2,c1,c2,d1,d2;
    int a,b,c,d;
    cin>>r1>>r2>>c1>>c2>>d1>>d2;
    set<int>l;
    a=(r1-d2+c1)/2;
    if(a>0&&a<10)
        l.insert(a);
    b=(r1+d2-c1)/2;
    if(b>0&&b<10)
        l.insert(b);
    c=(d2-r1+c1)/2;
    if(c>0&&c<10)
        l.insert(c);
    d=(2*r2-d2+r1-c1)/2;
    if(d>0&&d<10)
        l.insert(d);
    if(l.size()==4)
    {
        if(a+b==r1&&c+d==r2&&a+c==c1&&b+d==c2&&a+d==d1&&c+b==d2)
        cout<<a<<" "<<b<<endl<<c<<" "<<d<<endl;
        else
            cout<<-1<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}
