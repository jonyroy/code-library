/*
* Author: Jony Roy
* Date: 07-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ulli;
int main()
{
    ulli powerOfFive[]={5,25,125,625,3125,15625,78125,390625,1953125,9765625,48828125,244140625,1220703125};
    ulli n;
    ulli a[20];
    a[0]=1;
    for(int i=1;i<=12;i++)
    {
        a[i]=a[i-1]+powerOfFive[i-1];
//        cout<<a[i]<<endl;
    }
    while(cin>>n)
    {
        for(int i=0;i<=12;i++)
        {
            if((ulli)(n*powerOfFive[i])%(ulli)a[i]==0)
            {
                cout<<(n*powerOfFive[i])<<" "<<a[i]<<" ";
                ulli b=(n*powerOfFive[i])/a[i];
                cout<<b<<endl;
                break;
            }
        }
        //for(int i=0;i<=12;i++)
        //sum+=(n/powerOfFive[i]);
        //cout<<sum<<endl;
    }
    return 0;
}
