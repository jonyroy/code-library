#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        char a[50][50];
        int b[50][50]={0},r,c,rr,cc,flag=0;
        for(int j=1;j<=8;j++)
        {
            for(int k=1;k<=8;k++)
            {
                cin>>a[j][k];
                if(a[j][k]=='K')
                    {
                    if(flag==1)
                        {
                         rr=j,cc=k;
                        }
                        else{
                    r=j,c=k;
                    flag=1;}
                    }
            }
        }
            if((abs(r-rr)==0&&abs(c-cc)==4)||(abs(r-rr)==4&&abs(c-cc)==0)||(abs(r-rr)==4&&abs(c-cc)==4))
            cout<<"YES\n";
            else
            cout<<"NO\n";
    }
    return 0;
}
