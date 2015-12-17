#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    char ch[15]={'0','1','2','3','4','5','6','7','8','9'};
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        map<int,int>m;
        int cnt=1,cn,position;
        string s;
        d=a;
        a=a%b;
        if(a>0)
        {
        a=a*10;
        m[a]=cnt;
        }
        while(1)
        {
                if(a>0)
                {
                s+=(ch[a/b]);
                cnt++;
                a=a%b;
                }
                if(a==0)
                {
                    s+=ch[0];
                    position=cnt;
                    cnt=1;
                    break;
                }
                a=a*10;
                if(m[a])
                {
                    position=m[a];
                    cnt=cnt-m[a];
                    break;
                }
                m[a]=cnt;

            }
            printf("%d/%d = %d.",d,b,d/b);
            for(int i=0;i<=position-2;i++)
                printf("%c",s[i]);
            printf("(");
            if(cnt>=50)
            {
               for(int i=position;i<position+50;i++)
                        printf("%c",s[i-1]);
                    printf("...)");
            }
            else
            {
                 for(int i=position;i<position+cnt;i++)
                        printf("%c",s[i-1]);
                    printf(")");
            }
            printf("\n");
            printf("   %d = number of digits in repeating cycle\n\n",cnt);
    }
    return 0;
}
