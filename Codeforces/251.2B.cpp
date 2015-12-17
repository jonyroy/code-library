

#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,x;
     long long int sum=0,c[100005];
     cin>>n>>x;
     for(int i=0;i<n;i++)
        cin>>c[i];
     sort(c,c+n);
     for(int i=0;i<n;i++)
        {
        sum+=(c[i]*x);
        if(x>1)
            x--;
        }
     cout<<sum<<endl;
}
