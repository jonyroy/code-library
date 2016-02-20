#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    scanf("%ld",&n);
    for(long int i=1;i<=n;i++)
    {
        char s[20],st[20];
        scanf("%s",s);
        int len=strlen(s);
        for(int j=0;j<len;j++)
            st[j]=s[j];
        st[len]='\0';
        reverse(s,s+len);
        bool t=false;
        for(int j=0;j<len;j++)
        {
            if(s[j]!=st[j])
            {
                t=true;
                break;
            }
        }
        if(t==false)
        {
            printf("Case %ld: Yes\n",i);
        }
        else
            printf("Case %ld: No\n",i);
    }
    return 0;
}
