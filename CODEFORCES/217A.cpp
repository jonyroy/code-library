#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,rr,cc;
    cin>>r>>c>>rr>>cc;
    if(r==rr||c==cc)
        cout<<"1 ";
    else
        cout<<"2 ";
        if(((r%2&&c%2)||(r%2==0&&c%2==0))&&((rr%2&&cc%2)||(rr%2==0&&cc%2==0)))
            {
            if(abs(r-rr)==abs(c-cc))
            cout<<"1 ";
            else
            cout<<"2 ";
            }
            else if(((r%2==1&&c%2==0)||(r%2==0&&c%2==1))&&((rr%2==1&&cc%2==0)||(rr%2==0&&cc%2==1)))
                {
            if(abs(r-rr)==abs(c-cc))
            cout<<"1 ";
            else
            cout<<"2 ";
            }
            else
            cout<<"0 ";
            int a=abs(r-rr);
            int b=abs(c-cc);
            cout<<max(a,b)<<endl;
        return 0;
}
