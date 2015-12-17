#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[200]={0};
    m['Q']=9,m['R']=5,m['B']=3,m['N']=3,m['P']=1,m['K']=0;
    m['q']=9,m['r']=5,m['b']=3,m['n']=3,m['p']=1,m['k']=0;
    int w=0,b=0;
    string s;
    for(int i=0;i<8;i++)
    {
        cin>>s;
        for(int j=0;j<8;j++)
        {
            if(s[j]>='A'&&s[j]<='Z')
                w+=m[s[j]];
            if(s[j]>='a'&&s[j]<='z')
                b+=m[s[j]];
        }
    }
    if(w>b)
        cout<<"White";
    else if(b>w)
        cout<<"Black";
    else
        cout<<"Draw";
    return 0;
}
