#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    vector<pair<int,int> >a;
    cin>>n>>x;
    int c,b;
    int h=1;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>b>>c;
        int nm=b-h;
        nm=nm/x;
        h=nm*x+h;
        sum+=(c-h+1);
        h=c+1;
    }
    cout<<sum<<endl;
    return 0;
}
