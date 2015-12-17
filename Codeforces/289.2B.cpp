#include<bits/stdc++.h>
using namespace std;
int d[105][105],c[105][105];
int main()
{
    int n,k,a[105];
    cin>>n>>k;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        int b=1;
        for(int j=1;j<=a[i];j++)
        {
            if(b<=k)
            c[i][j]=b;
            else
            {
                b=1;
                c[i][j]=b;
            }

            d[i][b]++;
            b++;
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            for(int l=1;l<=100;l++)
            {
               if(fabs(d[i][l]-d[j][l])>1)
               {
                   cout<<"NO";
                   return 0;
               }
            }
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
