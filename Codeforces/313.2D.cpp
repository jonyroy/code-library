#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    int len=a.size();
    int lenCnt=b.size();
    if(len!=lenCnt)
    {
        cout<<"NO\n";
        return 0;
    }
    if(len%2)
    {
        if(a==b)
            cout<<"YES\n";
        else
            cout<<"NO\n";
        return 0;
    }
    while(len%2==0)
    {
        len=len/2;
    }
    int inCnt=lenCnt/len,k=0;
    for(int i=1;i<=inCnt/2;i++)
    {
        int mCn=lenCnt-(len*i);
        for(int j=k;j<len+k;j++)
        {
             if(a[j]==b[mCn])
                ;
             else
             {
                 cout<<"NO\n";
                 return 0;
             }
             mCn++;
        }
        k=len+k;
    }
    cout<<"YES\n";
    return 0;
}
