#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    float n;
    map<float,int>a;
    for(int i=3;i<=400;i++)
    {
         float m=((float)(i-2)*180.0)/(float)i;
         a[m]=1;
    }
    scanf("%d",&t);
    while(t--){
    cin>>n;
    if(a[n]==1)
        printf("YES\n");
    else
        printf("NO\n");
    }
    return 0;
}
