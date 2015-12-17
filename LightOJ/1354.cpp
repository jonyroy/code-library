#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>a,b;
    string s1,s2,poky,roky;
    scanf("%d",&n);
    for(auto i=1;i<=n;i++)
    {
        cin>>s1>>s2;
        for(auto j=0;j<=s1.size();j++)
        {
            if(s1[j]=='.'||s1[j]=='\0')
            {
                a.push_back(atoi(poky.c_str()));
                poky.clear();
            }
            else
            {
                poky+=s1[j];
            }
        }
        for(auto j=0;j<=s2.size();j++)
        {
            if(s2[j]=='.'||s2[j]=='\0')
            {
                int cnt=0,pnt=0;
                for(auto k=roky.size()-1;k>=0;k--)
                {
                      int kk=((1<<cnt)*(roky[k]-48));
                      pnt+=kk;
                      cnt++;
                }
                b.push_back(pnt);
                roky.clear();
            }
            else
            {
                roky+=s2[j];
            }
        }
        printf("Case %d: ",i);
        bool t=false;
        for(auto j=0;j<4;j++)
        {
            if(a[j]!=b[j])
            {
                t=true;
                printf("No\n");
                break;
            }
        }
        if(t==false)
            printf("Yes\n");
            a.clear();
            b.clear();
    }
    return 0;
}
