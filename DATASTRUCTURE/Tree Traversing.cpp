/*
* Author: Jony Roy
* Date: 10-03-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
using namespace std;
char str[100]={0};
int lef[100];
int righ[100];
using namespace std;
int traverse(int start)
{
    if(start==0)
    return 0;
    traverse(lef[start]);
    traverse(righ[start]);
    cout<<str[start]<<endl;
    return 0;
}
int main()
{
    int n,start=5;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        char s;
        int b,c;
        cin>>s>>b>>c;
        str[i]=s;
        lef[i]=b;
        righ[i]=c;
    }
    traverse(start);
    return 0;
}
