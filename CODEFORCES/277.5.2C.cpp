#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    int ch[105],c[105];
    if(m==1&&s==0)
    {
        cout<<"0 0";
        return 0;
    }
    if(s==0)
    {
        cout<<"-1 -1\n";
        return 0;
    }
    int nm;
    nm=s/m;
    if(s%m)
    nm++;
    if(nm>9)
    {
       cout<<"-1 -1\n";
       return 0;
    }
        int n=s;
        n--;
        for(int i=m-1;i>0;i--)
        {
            if(n>=9)
            {
            ch[i]=9;
            n-=9;
            }
            else
            {
                ch[i]=n;
                n-=n;
            }
        }
       ch[0]=1+n;
       n=s;
       for(int i=0;i<m;i++)
        {
            if(n>=9)
            {
                c[i]=9;
                n-=9;
            }
            else
            {
                c[i]=n;
                n-=n;
            }
        }
    for(int i=0;i<m;i++)
        cout<<ch[i];
    cout<<" ";
    for(int i=0;i<m;i++)
        cout<<c[i];
    return 0;
}
