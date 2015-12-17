#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<long int ,long int>a;
    vector<long int> b;
    long int m;
    while(cin>>m)
    {
        b.push_back(m);
        a[m]++;
    }
    int len=b.size();
    for(int i=0;i<len;i++)
    {
        if(a[b[i]])
        {
            cout<<b[i]<<" "<<a[b[i]]<<endl;
            a[b[i]]=0;
        }
    }
}
