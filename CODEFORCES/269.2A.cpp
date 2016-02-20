#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b[20]={0};
    for(int i=1;i<=6;i++)
    {
        cin>>a;
        b[a]++;
    }
    int cn=0;
    for(int i=1;i<=9;i++)
        if(b[i]>=4)
        {
        cn=1;
        b[i]=b[i]-4;
        }
        int cnt=0,c=0;
        for(int i=1;i<=9;i++)
        {
            if(b[i]==2)
            {
                cnt=1;
            }
            if(b[i]==1)
                c++;
        }
        if(cn==1&&cnt==0&&c==2)
            cout<<"Bear\n";
        else if(cn==1&&cnt==1&&c==0)
            cout<<"Elephant";
        else
            cout<<"Alien\n";
}
