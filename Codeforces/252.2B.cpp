#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,v,sum=0,temp=0,a[3005],b[3005];
    cin>>n>>v;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=1;i<=3001;i++)
    {
        int c=0;
        for(int j=1;j<=n;j++)
        {
            if(a[j]==i){
                c+=b[j];
            }
        }
        if(c+temp<=v)
            sum+=(c+temp),temp=0;
        else
        {
            sum+=v;
            if(temp>=v)
                temp=c;
            else
            {
                temp=v-temp;
                temp=c-temp;
            }
        }
    }
    cout<<sum<<endl;
}
