#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
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
    long int n,m[100010],sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>m[i];
        if(m[i]==i)
        {
            sum++;
            m[i]=-1;
        }
    }
    if(sum==n)
    {
        cout<<sum<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(m[i]<0)
            continue;
        if(m[m[i]]==i)
        {
            sum+=2;
            cout<<sum<<endl;
            return 0;
        }
    }
        sum++;
    cout<<sum<<endl;
    return 0;
}
