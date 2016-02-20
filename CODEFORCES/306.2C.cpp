#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if((s[i]-48)%8==0)
        {
            cout<<"YES\n";
            cout<<s[i]<<endl;
            return 0;
        }
        for(int j=i+1;j<s.size();j++)
        {
            string a;
            a+=s[i];
            a+=s[j];
            int m=atoi(a.c_str());
            if(m%8==0)
            {
                cout<<"YES\n";
                cout<<m<<endl;
                return 0;
            }
            for(int k=j+1;k<s.size();k++)
            {
               string c;
               c+=s[i];
               c+=s[j];
               c+=s[k];
               int mm=atoi(c.c_str());
               if(mm%8==0)
               {
                   cout<<"YES\n";
                   cout<<mm<<endl;
                   return 0;
               }
               string b;
               b+=s[j];
               b+=s[k];
               int n=atoi(b.c_str());
               if(n%8==0)
               {
                    cout<<"YES\n";
                    cout<<n<<endl;
                    return 0;
               }
            }
        }
    }
    cout<<"NO\n";
    return 0;
}
