#include<bits/stdc++.h>
using namespace std;
int face(char a,char b,char c,char d)
{
    int n[100]={0};
    n[a-96]++;
    n[b-96]++;
    n[c-96]++;
    n[d-96]++;
    if(n[1]==1&&n[3]==1&&n[5]==1&&n[6]==1)
        return 1;
    else
        return 0;

}
int main()
{
    int fx[]={0,0,1,1};
    int fy[]={0,1,0,1};
    int n,m;
    cin>>n>>m;
    n--,m--;
    string s[60];
    for(int i=0;i<=n;i++)
        cin>>s[i];
        int cnt=0;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=m;j++)
        {
            if(s[i][j]!='x'&&i+1<=n&&j+1<=m)
            {
                int k=face(s[i][j],s[i][j+1],s[i+1][j],s[i+1][j+1]);
                if(k)
                    cnt++;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
