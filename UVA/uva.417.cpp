#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,long int>a;
    string sn="abcdefghijklmnopqrstuvwxyz";
    long int cnt=1;
    for(int i=0;i<26;i++)
    {
        string jony;
         jony+=sn[i];
         a[jony]=cnt;
         cnt++;
    }
    for(int i=0;i<26;i++)
    {
        string sm;
        sm+=sn[i];
        for(int j=i+1;j<26;j++)
        {
            string jony;
            jony+=sm;
            jony+=sn[j];
            a[jony]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<26;i++)
    {
        string s1;
        s1+=sn[i];
        for(int j=i+1;j<26;j++)
        {
            string s2=s1;
            s2+=sn[j];
            for(int k=j+1;k<26;k++)
            {
               string jony;
               jony+=s2;
               jony+=sn[k];
               a[jony]=cnt;
               cnt++;
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        string s1;
        s1+=sn[i];
        for(int j=i+1;j<26;j++)
        {
            string s2=s1;
            s2+=sn[j];
            for(int k=j+1;k<26;k++)
            {
                string s3=s2;
                s3+=sn[k];
                for(int l=k+1;l<26;l++)
                {
                   string jony;
                   jony+=s3;
                   jony+=sn[l];
                   a[jony]=cnt;
                   cnt++;
                }
            }
        }
    }
    for(int i=0;i<26;i++)
    {
        string s1;
        s1+=sn[i];
        for(int j=i+1;j<26;j++)
        {
            string s2=s1;
            s2+=sn[j];
            for(int k=j+1;k<26;k++)
            {
                string s3=s2;
                s3+=sn[k];
                for(int l=k+1;l<26;l++)
                {
                    string s4=s3;
                    s4+=sn[l];
                    for(int h=l+1;h<26;h++)
                    {
                       string jony;
                       jony+=s4;
                       jony+=sn[h];
                       a[jony]=cnt;
                       cnt++;
                    }
                }
            }
        }
    }
    string input;
    while(cin>>input)
    cout<<a[input]<<endl;
}
