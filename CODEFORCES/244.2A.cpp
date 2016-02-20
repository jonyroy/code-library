#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,cnt=0,knt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        if(a>0)
            cnt+=a;
        else
        {
            if(cnt>0)
                cnt--;
            else
                knt++;
        }
    }
    cout<<knt<<endl;
    return 0;
}
