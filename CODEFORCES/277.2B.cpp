#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ma[105][105],m[105][105],a,b;
    vector<pair<int,int> >p;
    for(int i=0;i<102;i++)
        for(int j=0;j<102;j++)
        ma[i][j]=-1;
    cin>>a>>b;
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
        cin>>m[i][j];
        if(m[i][j]==0)
            p.push_back(make_pair(i,j));
        }
    }
    for(int i=0;i<p.size();i++)
    {
        int pa,pb;
        pa=p[i].first;
        pb=p[i].second;
        for(int j=1;j<=a;j++)
        {
            for(int k=1;k<=b;k++)
            {
                ma[pa][k]=0;
                ma[k][pb]=0;
            }
        }
    }
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(m[i][j])
            {
                int t=0;
                for(int k=1;k<=a;k++)
                {
                    for(int l=1;l<=b;l++)
                    {
                        if(ma[i][l]==-1||ma[i][l]==1)
                        {
                            ma[i][l]=1;
                            t=1;
                            break;
                        }
                        else if(ma[l][j]==-1||ma[l][j]==1)
                        {
                            ma[l][j]=1;
                            t=1;
                            break;
                        }
                    }
                }
                if(t==0)
                {
                    cout<<"NO\n";
                    return 0;
                }
            }
        }
    }
    cout<<"YES\n";
    for(int i=1;i<=a;i++)
    {
        for(int j=1;j<=b;j++)
        {
            if(ma[i][j]==-1)
            cout<<"0 ";
            else
                cout<<ma[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
