//wrong answer
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,cnt=0;
    cin>>n>>a>>b>>c;
    if(n%a==0)
    cnt=max(cnt,n/a);
    if(n%b==0)
    cnt=max(cnt,n/b);
    if(n%c==0)
    cnt=max(cnt,n/c);
    if(n%a>1&&(n%a)%b==0)
    cnt=max(cnt,n/a+(n%a)/b);
    if(n%a>1&&(n%a)%c==0)
    cnt=max(cnt,n/a+(n%a)/c);
    if(n%b>1&&(n%b)%a==0)
    cnt=max(cnt,n/b+(n%b)/a);
    if(n%b>1&&(n%b)%c==0)
    cnt=max(cnt,n/b+(n%b)/c);
    if(n%c>1&&(n%c)%a==0)
    cnt=max(cnt,n/c+(n%c)/a);
    if(n%c>1&&(n%c)%b==0)
    cnt=max(cnt,n/c+(n%c)/b);
    if(n%a>0&&(n%a)%b>0&&((n%a)%b)%c==0)
    cnt=max(cnt,(n/a+(n%a)/b+((n%a)%b)/c));
    if(n%a>0&&(n%a)%c>0&&((n%a)%c)%b==0)
    cnt=max(cnt,(n/a+(n%a)/c+((n%a)%c)/b));
    if(n%b>0&&(n%b)%a>0&&((n%b)%a)%c==0)
    cnt=max(cnt,(n/b+(n%b)/a+((n%b)%a)/c));
    if(n%b>0&&(n%b)%c>0&&((n%b)%c)%a==0)
    cnt=max(cnt,(n/b+(n%b)/c+((n%b)%c)/a));
    if(n%c>0&&(n%c)%a>0&&((n%c)%a)%b==0)
    cnt=max(cnt,(n/c+(n%c)/a+((n%c)%a)/b));
    if(n%c>0&&(n%c)%b>0&&((n%c)%b)%a==0)
    cnt=max(cnt,(n/c+(n%c)/b+((n%c)%b)/a));
    cout<<cnt<<endl;
    return 0;
}
