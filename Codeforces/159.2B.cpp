#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[100005],cnt;
    scanf("%d%d",&n,&m);
    if(n>m)
    swap(n,m);
    cnt=1,n--;
    int c=0,cc=0;
    int jony=n+m;
    for(int i=1;i<=jony;i++)
    {
        if(i%2)
        {
            if(cnt==1)
            {
               if(m>0)
               {
               c++;
               m--;
               cnt=0;
               }
               else
               {
                   cc++;
                   n--;
                   cnt=1;
               }
            }
            else if(cnt==0)
            {
                if(n>0)
                {
                    c++;
                    n--;
                    cnt=0;
                }
                else
                {
                    cc++;
                    m--;
                    cnt=0;
                }
            }
        }
        else
        {
            if(cnt==1&&n>0)
            {
                cnt=1;
                cc++;
                n--;
            }
            else if(cnt==0&&m>0)
            {
                cc++;
                m--;
                cnt=0;
            }
            else if(cnt==1&&n<=0&&m>0)
            {
                c++;
                m--;
                cnt=0;
            }
            else if(cnt==0&&m<1&&n>0)
                c++,n--,cnt=1;
        }
    }
    cout<<cc<<" "<<c<<endl;
    return 0;
}
