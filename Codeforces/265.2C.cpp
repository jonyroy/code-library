#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,i;
    string s,sn,store="aabcdefghijklmnopqrstuvwxyz";
    cin>>n>>p>>s;
    for(i=n-1;i>=0;i--)
    {
        int t=0;
        for(int j=s[i]-'a'+2;j<=p;j++)
        {
            sn=s;
            sn[i]=store[j];
            if((sn[i]==sn[i-1]&&i-1>=0)||(sn[i]==sn[i-2]&&i-2>=0))
             continue;
             else
             {
                 t=1;
                 break;
             }
        }
        if(t)
        break;
    }
    if(i<0)
    {
        cout<<"NO\n";
        return 0;
    }
    for(int j=i+1;j<n;j++)
    {
        int t=0;
         for(int k=1;k<=p;k++)
         {
             sn[j]=store[k];
             if((sn[j]==sn[j-1]&&j-1>=0)||(sn[j]==sn[j-2]&&j-2>=0))
                continue;
             else
             {
                 t=1;
                 break;
             }
         }
         if(t==0)
         {
             cout<<"NO\n";
             return 0;
         }
    }
    cout<<sn<<endl;
    return 0;
}
