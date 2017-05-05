#include<bits/stdc++.h>
using namespace std;
map<string,int>ch,bid,cnt;
int bfs(string s)
{
    queue<string>q;
    q.push(s);
    while(!q.empty())
    {
        string sn=q.front();
        q.pop();
        for(int i=0;i<3;i++)
        {
            string m=sn,km=sn;
            if(m[i]=='z')
            {
                m[i]='a';
                if(!ch[m])
                if(!bid[m]){
                    cnt[m]=cnt[sn]+1;
                    q.push(m);
                    ch[m]++;
                }
                km[i]--;
                if(!ch[km])
                    if(!bid[km]){
                    cnt[km]=cnt[sn]+1;
                    q.push(km);
                    ch[km]++;
                    }
            }
            else if(m[i]=='a')
            {
                m[i]='z';
                if(!ch[m])
                if(!bid[m]){
                    cnt[m]=cnt[sn]+1;
                    q.push(m);
                    ch[m]++;
                }
                km[i]++;
                if(!ch[km])
                    if(!bid[km]){
                    cnt[km]=cnt[sn]+1;
                    q.push(km);
                    ch[km]++;
                    }
            }
            else
            {
                m[i]++;
                if(!ch[m])
                if(!bid[m]){
                    cnt[m]=cnt[sn]+1;
                    q.push(m);
                    ch[m]++;
                }
                km[i]--;
                if(!ch[km])
                    if(!bid[km]){
                    cnt[km]=cnt[sn]+1;
                    q.push(km);
                    ch[km]++;
                    }
            }
        }
    }
}
int main()
{
    int n,m;
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
    {
      string a,b,a1,a2,a3;
      cin>>a>>b>>n;
      for(int j=1;j<=n;j++)
      {
          cin>>a1>>a2>>a3;
          int len1,len2,len3;
          len1=a1.length();
          len2=a2.length();
          len3=a3.length();
          for(int k=0;k<len1;k++)
          {
              for(int l=0;l<len2;l++)
              {
                  for(int h=0;h<len3;h++)
                  {
                      string jony;
                      jony+=a1[k];
                      jony+=a2[l];
                      jony+=a3[h];
                      bid[jony]++;
                  }
              }
          }
      }
        if(bid[a]||bid[b])
        printf("Case %d: -1\n",i);
        else if(a==b)
        printf("Case %d: 0\n",i);
        else
        {
            bfs(a);
            int knt=cnt[b];
            if(knt)
            printf("Case %d: %d\n",i,knt);
            else
            printf("Case %d: -1\n",i);
        }
        ch.clear();
        cnt.clear();
        bid.clear();
    }
    return 0;
}
