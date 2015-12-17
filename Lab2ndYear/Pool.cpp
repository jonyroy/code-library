#include<iostream>
#include<cmath>
using namespace std;
class Pool
{
    int a,b;
public:
    void getdata(int n,int m)
    {
        a=n;
        b=m;
    }
    void solve()
    {
        int C=0;
        for(int i=a;i<b;i++)
        {
            float n;
            n=(float)sqrt(i);
            int m=n;
            if(m==n)
            {
                float q=(float)sqrt(1+8*(i-1))-1.0;
                q=q/2.0;
                int p=q;
                if(p==q&&p!=0)
                C++;
            }
        }
        cout<<C<<endl;
    }
};
int main()
{
    int a,b;
    Pool p;
    while(cin>>a>>b)
    {
        if(a==0&&b==0)
        break;
        p.getdata(a,b);
        p.solve();
    }
    return 0;
}
