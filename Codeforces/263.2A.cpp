#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int fx[5]={0,-1,0,1};
int fy[5]={-1,0,1,0};
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        scanf("%s",a[i]+1);
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cnt=0;
            for(int k=0;k<=3;k++)
            {
                if(a[i+fx[k]][j+fy[k]]=='o')
                    cnt++;
            }
            if(cnt%2)
            {
                cout<<"NO";
                return 0;
            }
        }
    }
        cout<<"YES";
    return 0;
}
