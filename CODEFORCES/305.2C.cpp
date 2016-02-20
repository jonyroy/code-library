#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int m,h1,h2,x1,x2,y1,y2,a1,a2;
    //scanf("%I64d%I64d%I64d%I64d%I64d%I64d%I64d%I64d%I64d",&m,&h1,&a1,&x1,&y1,&h2,&a2,&x2,&y2);
    cin>>m;
    cin>>h1>>a1>>x1>>y1;
    cin>>h2>>a2>>x2>>y2;
    for(int i=1;i<=10000000;i++)
    {
        h1=(x1*h1+y1)%m;
        h2=(x2*h2+y2)%m;
        if(h1==a1&&h2==a2)
        {
            printf("%d\n",i);
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
