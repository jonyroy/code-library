#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b,c;
    cin>>a>>b>>c;
    vector<long>v;
    for(int i=1;i<=81;i++)
    {
        long long sum=i;
        for(int j=2;j<=a;j++)
            sum*=i;
        sum*=b;
        sum+=c;
        if(sum>0&&sum<1000000000)
        {
            long long cn=sum,cnt=0;
            while(cn)
            {
                cnt+=cn%10;
                cn/=10;
            }
            if(cnt==i)
            v.push_back(sum);
        }
    }
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    return 0;
}
