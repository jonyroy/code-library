#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[10];
    cin>>n;
    for(int i=1;i<=7;i++)
        cin>>a[i];
    while(1)
    {
       for(int i=1;i<=7;i++)
       {
           if(n<=a[i])
           {
               cout<<i<<endl;
               return 0;
           }
           else
            n=n-a[i];
       }
    }
    return 0;
}
