#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int a[100010],n,m,count=0;
    cin>>n;
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        a[i]=a[i-1]+m;
    }
    for(int i=1;i<n;i++)
        if(2*a[i]==a[n])
        count++;
    cout<<count;
    return 0;
}
