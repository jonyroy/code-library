#include<bits/stdc++.h>
using namespace std;
int m;
string s;
set<string>cnt;
void HeapPermute(int n)
{
    if (n==1)
    cnt.insert(s);
    else
    {
        for (int i = 0; i < n; i++)
        {
            HeapPermute(n-1);
            if (n % 2 == 1)
                swap(s[0], s[n-1]);
            else
                swap(s[i], s[n-1]);
        }
    }
}
int main()
{
    while(cin>>s)
    {
        m=s.length();
        HeapPermute(m);
        set<string> ::iterator it;
        for(it=cnt.begin(); it!=cnt.end(); it++)
            cout<<*it<<endl;
        cnt.clear();
    }
    return 0;
}

