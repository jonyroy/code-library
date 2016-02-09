#include<bits/stdc++.h>
using namespace std;
int a[505][505],b[505][505];
int main()
{
    int h,w,q;
    string s[505];
    cin>>h>>w;
    for(int i=1; i<=h; i++)
        cin>>s[i];
    for(int i=1; i<=h; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(s[i][j-1]=='#')
                a[i][j]=0;
            else
                a[i][j]=a[i][j-1]+1;
        }
    }

    for(int i=1; i<=h; i++)
    {
        int ma=0;
        for(int j=1; j<=w; j++)
        {

            if(a[i][j]-1>0)
            {
                ma++;
                a[i][j]=ma;
            }
            else
                a[i][j]=ma;
        }
    }

    for(int j=1; j<=w; j++)
    {
        for(int i=1; i<=h; i++)
        {
            if(s[i][j-1]=='#')
                b[i][j]=0;
            else
                b[i][j]=b[i-1][j]+1;
        }
    }
    for(int j=1; j<=w; j++)
    {
        int ma=0;
        for(int i=1; i<=h; i++)
        {
            if(b[i][j]-1>0)
            {
                ma++;
                b[i][j]=ma;
            }
            else
                b[i][j]=ma;
        }
    }
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        int x,y,x1,y1;
        long long int sum=0;
        cin>>x>>y>>x1>>y1;
        for(int j=x; j<=x1; j++)
        {
            sum=sum+(a[j][y1]-a[j][y]);
        }
        for(int j=y; j<=y1; j++)
        {
            sum=sum+(b[x1][j]-b[x][j]);
        }
        cout<<sum<<endl;
    }
    return 0;
}
