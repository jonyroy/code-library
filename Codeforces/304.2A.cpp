#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k,n,w,sum;
    cin>>k>>n>>w;
    sum=(w*(w+1))/2;
    sum=sum*k;
    if(n>=sum)
        cout<<0<<endl;
    else
        cout<<sum-n<<endl;
}
