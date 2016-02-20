#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[100009];
    int cn=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%d",m+i);
    for(int i=n;i>1;i--)
        {
        if(m[i]<m[i-1])
            break;
        cn++;
        }
    printf("%d\n",n-(cn+1));
    return 0;
}
