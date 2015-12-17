#include<bits/stdc++.h>
using namespace std;
int prefix(char *p,long int kmp[])
{
    long int k=0,len=strlen(p);
    for(long int i=2;i<=len;i++)
    {
        while(k>0&&p[k]!=p[i-1])
        {
            k=kmp[k];
        }
        if(p[k]==p[i-1])
            k++;
        kmp[i]=k;
    }
    return 0;
}
vector<long int> kmp_algorithm(char *t,char *p,long int kmp[])
{
    long int k=0,t_len=strlen(t),p_len=strlen(p);
    vector<long int> cnt;
    for(long int i=1;i<=t_len;i++)
    {
        while(k>0&&p[k]!=t[i-1])
            k=kmp[k];
        if(p[k]==t[i-1])
            k++;
        kmp[i]=k;
        if(p_len==k)
        {
          cnt.push_back(i-p_len);
        }
    }
    return cnt;
}
int main()
{
    long int kmp[1000000],n;
    char p[1000000],t[1000000];
    vector<long int>cnt;
    while(scanf("%ld%s%s",&n,p,t)!=EOF)
    {
        prefix(p,kmp);
        cnt=kmp_algorithm(t,p,kmp);
        int len=cnt.size();
        for(int i=0;i<len;i++)
        printf("%ld\n",cnt[i]);
        printf("\n");
        cnt.clear();
    }
}
