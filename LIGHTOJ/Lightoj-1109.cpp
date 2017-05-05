#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b)
{
    if(a.second<b.second)
        return true;
    else if(a.second==b.second)
    {
        if(a.first>b.first)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main()
{
    vector<pair<int,int> >ans;
    vector<int> primeNumber;
    primeNumber.push_back(2);
    bitset<1005> check;
    for(int i=3;i<=100;i+=2)
    {
        if(!check[i])
        {
            for(int j=i*i;j<=1000;j+=i)
            {
                check[j]=1;
            }
        }
    }
    for(int i=3;i<=100;i+=2)
    if(!check[i])
    primeNumber.push_back(i);
    ans.push_back(make_pair(1,1));
    ans.push_back(make_pair(2,2));
    ans.push_back(make_pair(3,2));
    int len=primeNumber.size();
    for(int i=4;i<=1000;i++)
    {
        int N=i,M=1;
        for(int j=0;N>primeNumber[j]&&j<len;j++)
        {
            if(N==1)
            break;
            int c=0;
            while(N%primeNumber[j]==0)
                {
                    N/=primeNumber[j];
                    c++;
                }
                M*=(c+1);
        }
        if(N>1)
        M*=2;
        ans.push_back(make_pair(i,M));
    }
    sort(ans.begin(),ans.end(),compare);
    int TestCase;
    cin>>TestCase;
    for(int i=1;i<=TestCase;i++)
    {
        int n;
        cin>>n;
        printf("Case %d: %d\n",i,ans[n-1].first);
    }
    return 0;
}
