#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int cnt=0,sum=0;
    while(getline(cin,s))
    {
        if(s[0]=='+')
            cnt++;
        else if(s[0]=='-')
            cnt--;
        else
        {
            int c=0;
            for(int i=s.size()-1;;i--)
            {
                if(s[i]==':')
                    break;
                c++;
            }
            sum+=(c*cnt);
        }
    }
    cout<<sum<<endl;
    return 0;
}
