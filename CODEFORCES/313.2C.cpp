#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[100],b,c,d,e,f,sum=0;
    cin>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6];
    a[7]=a[1];
    a[8]=a[2];
    a[9]=a[3];
    a[10]=a[4];
    a[11]=a[5];
    a[12]=a[6];
    int j;
    for(int i=1;i<6;i++){
        if(a[i]<=a[i+1])
         {
           j=i;
           break;
         }
    }
    int cnt=a[j]*2+1;
    for(int i=1;i<=a[j+1];i++)
    {
        sum+=cnt;
       cnt+=2;
    }
    int cn=a[j+3]*2+1;
    for(int i=1;i<=a[j+4];i++)
    {
        sum+=cn;
        cn=(cn+2);
    }
    cout<<sum<<endl;
    return 0;
}
