/*
* Author: Jony Roy
* Dept: Information and Communication Engineering
* Date: 29-01-2016
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int storeValue[10005]={0};
    storeValue[1]=1;
    storeValue[2]=2;
    storeValue[3]=3;
    for(int i=4;i<=10000;i++)
    {
        int sqrtRoot=sqrt(i);
        int counDown=1;
        for(int j=2;j<=sqrtRoot;j++)
        {
          if(i%j==0)
            counDown++;
        }
        storeValue[i]=storeValue[i-1]+counDown;
    }
    int n;
    while(cin>>n)
    {
        cout<<storeValue[n]<<endl;
    }
    return 0;
}
