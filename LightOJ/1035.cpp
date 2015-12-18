/*
* Author: Jony Roy
* Date: 03-02-2016
* Contact:jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase;
    cin>>TestCase;
    for(int i=1;i<=TestCase;i++)
    {
        int n;
        int a[105]={0};
        cin>>n;
        for(int j=2;j<=n;j++)
        {
            int m=j;
            for(int k=2;k<=sqrt(m);k++)
            {
                if(m==1)
                break;
               while(m%k==0)
               {
                   a[k]++;
                   m=m/k;
               }
            }
            if(m>1)
            a[m]++;
        }
        printf("Case %d: %d = ",i,n);
        int counter=1;
        for(int j=2;j<=n;j++)
        {
           if(a[j])
           {
               if(counter==1)
                {
                cout<<j<<" "<<"("<<a[j]<<")";
                counter++;
                }
                else
                {
                    cout<<" * "<<j<<" "<<"("<<a[j]<<")";
                }
           }

        }
        cout<<endl;
    }
    return 0;
}
