/*
* Author: Jony Roy
* Date: 25-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}
llint PowerFunction(llint b,llint m)
{
    if(m==0)
        return 1;
    llint ans=1;
    for(int i=1; i<=m; i++)
    {
        ans*=b;
    }
    return ans;
}
int main(int argc, char *argv[])
{

    string s="0123456789ABCDEF",a;
    int dp[200];
    dp['0']=0;
    dp['1']=1;
    dp['2']=2;
    dp['3']=3;
    dp['4']=4;
    dp['5']=5;
    dp['6']=6;
    dp['7']=7;
    dp['8']=8;
    dp['9']=9;
    dp['A']=10;
    dp['B']=11;
    dp['C']=12;
    dp['D']=13;
    dp['E']=14;
    dp['F']=15;
    llint b,c;
    while(cin>>a>>b>>c)
    {
        llint cnt=0,ans=0;
        for(int i=a.size()-1; i>=0; i--)
        {
            llint m=PowerFunction(b,cnt);
            ans=ans+dp[a[i]]*m;
            cnt++;
        }
        string output;
        if(ans==0)
        {
            output+="0";
        }
        while(ans)
        {
            output+=(s[ans%c]);
            ans/=c;
        }
        int ln=output.size();
        if(ln>7)
        {
            cout<<"  ERROR"<<endl;

        }
        else
        {
            for(int i=1; i<=7-ln; i++)
                output+=" ";
            reverse(output.begin(),output.end());
            cout<<output<<endl;
        }
    }
    return 0;
}
