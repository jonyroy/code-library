#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[5],sum=0;
    for(int i=0;i<3;i++)
        cin>>a[i];
    sort(a,a+3);
    sum=a[0];
    for(int i=0;i<3;i++)
        a[i]=a[i]-sum;
        //cout<<a[0]<<" "<<a[1]<<" "<<a[2]<<endl;
    while(a[1])
    {
        sort(a,a+3);
        if(a[2]/4==0)
        {
            if(a[1]==3&&a[2]==3)
            {
                sum+=2;
                break;
                }
            if(a[1]>=1&&a[2]>=2)
            {
                sum++;
            }
            break;
        }
        long long cnt=a[2]/4;
        if(cnt<=a[1])
          ;
        else
            cnt=a[1];
        sum+=cnt;
        a[1]=a[1]-cnt;
        a[2]=a[2]-(cnt*2);
    }
    cout<<sum;
    return 0;
}
