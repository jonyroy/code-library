#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,a[100050],test[100050]={0},m=-90;
    cin>>n;
    test[1]=1,test[2]=1;
    for(int i=1;i<=n;i++)
        cin>>a[i];
        if(n<=2)
        {
            cout<<n<<endl;
            return 0;
        }
        long coun=0;
    for(int i=3;i<=n;i++)
        {
        if((a[i-2]+a[i-1])==a[i])
            coun++;
            else
            {
             m=max(coun+2,m);
             coun=0;
            }
        }
    m=max(coun+2,m);
    cout<<m<<endl;
    return 0;
}
