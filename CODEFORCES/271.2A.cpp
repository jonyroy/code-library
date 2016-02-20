#include<bits/stdc++.h>
using namespace std;
int main()
{
    string r="avxswdfguhjknbioqearycqztz";
    string l="snvfrghjokl;,mppwtdyibecux";
    string cn,m;
    cin>>cn>>m;
    if(cn=="R")
    {
        for(int i=0;i<m.size();i++)
        {
            if(m[i]==';')
                cout<<"l";
            else if(m[i]==',')
                cout<<"m";
            else if(m[i]=='.')
                cout<<",";
                else if(m[i]=='/')
                    cout<<".";
            else
                cout<<r[m[i]-97];
        }
    }
    else
    {
        for(int i=0;i<m.size();i++)
        {
            if(m[i]=='l')
                cout<<";";
            else if(m[i]=='m')
                cout<<",";
            else if(m[i]==',')
                cout<<".";
                else if(m[i]=='.')
                    cout<<"/";
            else
                cout<<l[m[i]-97];
        }
    }
    return 0;
}
