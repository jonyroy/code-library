#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,r,c;
    freopen("input.in","r",stdin);
    freopen("output.out","w",stdout);
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x>>r>>c;
        cout<<"Case #"<<i<<": ";
        if(x==1)
        {
                cout<<"GABRIEL\n";
        }
        else if(x==2)
        {
            if((r*c)%2==0)
                cout<<"GABRIEL\n";
            else
                cout<<"RICHARD\n";
        }
        else if(x==3)
        {
            if(r*c>3&&(r*c)%3==0)
                cout<<"GABRIEL\n";
            else
                cout<<"RICHARD\n";
        }
        else
        {
           if((r*c)==12||(r*c)==16)
                cout<<"GABRIEL\n";
            else
                cout<<"RICHARD\n";
        }
    }
    return 0;
}
