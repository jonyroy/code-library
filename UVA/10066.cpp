/*
* Author: Jony Roy
* Date: 08-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int LongestCommonSubsequence(vector<int>a, vector<int>b)
{
    int alen=a.size();
    int blen=b.size();
    int s[105][105]={0};
    for(int i=0;i<alen;i++)
    {
        for(int j=0;j<blen;j++)
        {
            if(a[i]==b[j])
            s[i+1][j+1]=s[i][j]+1;
            else
                s[i+1][j+1]=max(s[i+1][j],s[i][j+1]);
        }
    }
    return s[alen][blen];
}
int main()
{
    int n,m,TestCase=1;
    while(1)
    {
        cin>>n>>m;
        if(n+m==0)
            return 0;
        vector<int>a,b;
        for(int i=1;i<=n;i++)
        {
            int x;
            cin>>x;
            a.push_back(x);
        }
        for(int j=1;j<=m;j++)
        {
            int x;
            cin>>x;
            b.push_back(x);
        }
        int x=LongestCommonSubsequence(a,b);
        printf("Twin Towers #%d\n",TestCase);
        printf("Number of Tiles : %d\n",x);
        cout<<endl;
        TestCase++;
    }
    return 0;
}
