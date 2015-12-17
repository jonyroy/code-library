#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n[105][105]={0},m,a,b,c,d;
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b>>c>>d;
        int x=min(a,c);
        int y=max(a,c);
        int xx=min(b,d);
        int yy=max(b,d);
        for(int j=xx;j<=yy;j++)
        {
            for(int k=x;k<=y;k++)
                n[j][k]++;
        }
    }
    int sum=0;
    for(int i=1;i<=100;i++)
    {
        for(int j=1;j<=100;j++)
            if(n[i][j])
            sum+=n[i][j];
    }
    cout<<sum<<endl;
    return 0;
}
