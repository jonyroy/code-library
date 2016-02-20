#include<stdio.h>
#include<cstdlib>
#include<string.h>
#include<functional>
#include<cmath>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<cstring>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int main()
{
    long long int n,a,A[1005],N,K;
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>N>>K>>a;
        for(int j=1;j<=N;j++)
            cin>>A[j];
        getchar();
        cin>>s;
        if(s=="AND")
            {
            for(int j=1;j<=N;j++)
            a=a&A[j];
            a=a&K;
            }
        else if(s=="OR")
            {
            for(int j=1;j<=N;j++)
            a=a|A[j];
            a=a|K;
            }
        else
            {
            for(int j=1;j<=N;j++)
            a=a^A[j];
            a=a^K;
            }
        cout<<a<<endl;
    }

    return 0;
}
