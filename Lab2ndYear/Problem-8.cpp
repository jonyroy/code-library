//Phone Number
#include<bits/stdc++.h>
using namespace std;
string st[15]={"0","0","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class PhoneNumber
{
    private:
    string s;
    vector<int>ar,a;
    int c;
    public:
    void Alpha_Tran();
    int input_data();
};
int PhoneNumber::input_data()
{
    c=0;
    cin>>s;
    for(int i=0;i<s.size();i++)
        if(s[i]=='0')
            c++;
        if(c==7)
        return 0;
        return 1;
}
void PhoneNumber::Alpha_Tran()
{
    for(int i=0;i<s.length();i++)
    {
        if(s[i]-48>=0&&s[i]-48<=9)
        {
            ar.push_back(s[i]-48);
            a.push_back(i);
        }
    }
    if(ar.size()==1)
        for(int i=0;i<st[ar[0]].size();i++)
        {
          int n=a[0];
          string ss=s;
          ss[n]=st[ar[0]][i];
          cout<<ss<<endl;
        }
    else if(ar.size()==2)
        for(int i=0;i<st[ar[0]].size();i++)
         {
             int n=a[0];
             string ss=s;
             ss[n]=st[ar[0]][i];
             int m=a[1];
           for(int j=0;j<st[ar[1]].size();j++)
           {
               ss[m]=st[ar[1]][j];
               cout<<ss<<endl;
           }
         }
        else if(ar.size()==3)
        for(int i=0;i<st[ar[0]].size();i++)
         {
             string ss=s;
             ss[a[0]]=st[ar[0]][i];
           for(int j=0;j<st[ar[1]].size();j++)
           {
               ss[a[1]]=st[ar[1]][j];
               for(int k=0;k<st[ar[2]].size();k++)
               {
                   ss[a[2]]=st[ar[2]][k];
                   cout<<ss<<endl;
               }
           }
         }
        else if(ar.size()==4)
        for(int i=0;i<st[ar[0]].size();i++)
         {
             string ss=s;
             ss[a[0]]=st[ar[0]][i];
           for(int j=0;j<st[ar[1]].size();j++)
           {
               ss[a[1]]=st[ar[1]][j];
               for(int k=0;k<st[ar[2]].size();k++)
               {
                   ss[a[2]]=st[ar[2]][k];
                   for(int l=0;l<st[ar[3]].size();l++)
                    {
                        ss[a[3]]=st[ar[3]][l];
                        cout<<ss<<endl;
                    }
               }
           }
         }

        else if(ar.size()==5)
        for(int i=0;i<st[ar[0]].size();i++)
         {
             string ss=s;
             ss[a[0]]=st[ar[0]][i];
           for(int j=0;j<st[ar[1]].size();j++)
           {
               ss[a[1]]=st[ar[1]][j];
               for(int k=0;k<st[ar[2]].size();k++)
               {
                   ss[a[2]]=st[ar[2]][k];
                   for(int l=0;l<st[ar[3]].size();l++)
                    {
                        ss[a[3]]=st[ar[3]][l];
                        for(int t=0;t<st[ar[4]].size();t++)
                        {
                            ss[a[4]]=st[ar[4]][t];
                            cout<<ss<<endl;
                        }
                    }
               }
           }
         }
        else if(ar.size()==6)
        for(int i=0;i<st[ar[0]].size();i++)
         {
             string ss=s;
             ss[a[0]]=st[ar[0]][i];
           for(int j=0;j<st[ar[1]].size();j++)
           {
               ss[a[1]]=st[ar[1]][j];
               for(int k=0;k<st[ar[2]].size();k++)
               {
                   ss[a[2]]=st[ar[2]][k];
                   for(int l=0;l<st[ar[3]].size();l++)
                    {
                        ss[a[3]]=st[ar[3]][l];
                        for(int t=0;t<st[ar[4]].size();t++)
                        {
                            ss[a[4]]=st[ar[4]][t];
                            for(int r=0;r<st[ar[5]].size();r++)
                            {
                            ss[a[5]]=st[ar[5]][r];
                            cout<<ss<<endl;
                            }
                        }
                    }
               }
           }
         }

        else if(ar.size()==7)
        for(int i=0;i<st[ar[0]].size();i++)
         {
             string ss=s;
             ss[a[0]]=st[ar[0]][i];
           for(int j=0;j<st[ar[1]].size();j++)
           {
               ss[a[1]]=st[ar[1]][j];
               for(int k=0;k<st[ar[2]].size();k++)
               {
                   ss[a[2]]=st[ar[2]][k];
                   for(int l=0;l<st[ar[3]].size();l++)
                    {
                        ss[a[3]]=st[ar[3]][l];
                        for(int t=0;t<st[ar[4]].size();t++)
                        {
                            ss[a[4]]=st[ar[4]][t];
                            for(int r=0;r<st[ar[5]].size();r++)
                            {
                            ss[a[5]]=st[ar[5]][r];
                            for(int q=0;q<st[ar[6]].size();q++)
                            {
                            ss[a[6]]=st[ar[6]][q];
                            cout<<ss<<endl;
                            }
                            }
                        }
                    }
               }
           }
         }
         ar.clear();
         a.clear();
}

int main()
{
    PhoneNumber x;
    while(x.input_data())
    x.Alpha_Tran();
}
