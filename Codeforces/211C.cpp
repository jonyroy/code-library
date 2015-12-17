#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int si=s.size();
    for(int i=0;i<si;)
    {
        if(s[i]==s[i+1]&&i+1<si)
        {
            if((s[i+2]==s[i+3])&&(i+3<si))
            {
            s.erase(i+3,1);
            si-=1;
//            i++;
            }
            else if(s[i+1]==s[i+2])
            {
            s.erase(i+1,2);
            si-=2;
//            i++;
            }
            else
                i++;
        }
        else
            i++;
    }
    cout<<s<<endl;
    return 0;
}
