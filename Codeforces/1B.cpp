#include<bits/stdc++.h>
using namespace std;
bool jony(string s)
{
    int i,t=0;
    for(i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='C')
        {
            t=1;
            break;
        }
    }
    if(t==1&&s[0]=='R'&&i>1&&s[i-1]>='0'&&s[i-1]<='9')
        return true;
    else
        return false;
}
int main()
{
    int n;
    string s;
    cin>>n;
    long store[10]={1,26,676,17576,456976,11881376};
    while(n--)
    {
        int i=1;
        string ss,sss,str,st;
        cin>>s;
        bool test=jony(s);
        if(test)
        {
            while(s[i]!='C'){
                ss+=s[i];i++;
            }
            i++;
            while(i<s.size())
                sss+=s[i],i++;
                int m=atoi(sss.c_str());
                string k;
                while(m)
                {
                    int b=m%26;
                    if(b==0)
                        b+=26;
                        char c=64+b;
                        k+=c;
                        m=m-b;
                        m/=26;
                }
                for(int jo=k.size()-1;jo>=0;jo--)
                    cout<<k[jo];
                cout<<ss<<endl;
        }
        else
        {
            int j=0;
            while(s[j]>='A'&&s[j]<='Z')
                str+=s[j],j++;
            while(j<s.size())
                st+=s[j],j++;
            int sum=0,l=0;
            for(j=str.size()-1;j>=0;j--)
            {
                sum+=((str[j]-64)*store[l++]);
            }
            cout<<"R"<<st<<"C"<<sum<<endl;
        }
    }
    return 0;
}
