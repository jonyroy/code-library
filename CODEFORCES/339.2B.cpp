/*
* Author: Jony Roy
* Date: 24-04-2016
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
int main(int argc, char *argv[])
{
        int n;
        cin>>n;
        int zero=0,zeroTest=0;
        string numString,ans="1";
        for(int i=1;i<=n;i++)
        {
           cin>>numString;
           if(zeroTest)
            continue;
           int one=0,others=0,len=numString.size();
           if(len==1 && numString[0]=='0')
           {
               zeroTest=1;
               continue;
           }
           int k;
           string a;
           for(int j=len-1;j>=0;j--)
           {
               if(numString[j]=='0')
                zero++,k=j;
                else
                {
                   a=numString.substr(0,j+1);
                   break;
                }
           }
           if(a.size() > 1 || a[0]> '1')
                ans=a;
        }
        if(zeroTest)
        {
            cout<<"0"<<endl;
        }
        else
        {
           cout<<ans;
            for(int i=1;i<=zero;i++)
            cout<<"0";
            cout<<endl;
        }
        return 0;
}

