#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10][10],b[10][10];
    for(int i=1;i<=7;i++)
        for(int j=1;j<=7;j++)
        a[i][j]=1;
    for(int i=2;i<=4;i++)
        for(int j=2;j<=4;j++)
        cin>>b[i][j];
    for(int i=2;i<=4;i++)
    {
        for(int j=2;j<=4;j++)
        {
            if(b[i][j]%2)
            {
                if(a[i][j])
                a[i][j]=0;
                else
                a[i][j]=1;
                if(a[i][j-1])
                a[i][j-1]=0;
                else
                a[i][j-1]=1;
                if(a[i-1][j])
                a[i-1][j]=0;
                else
                a[i-1][j]=1;
                if(a[i][j+1])
                a[i][j+1]=0;
                else
                a[i][j+1]=1;
                if(a[i+1][j])
                a[i+1][j]=0;
                else
                a[i+1][j]=1;
            }
        }
    }
    for(int i=2;i<=4;i++)
    {
        for(int j=2;j<=4;j++)
        cout<<a[i][j];
        cout<<endl;
    }
    return 0;
}
