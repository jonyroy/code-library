#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
int main()
{
    stack<string>backward,forwar;
    string s,n,str;
    int T;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
    backward.push("http://www.lightoj.com/");
    cout<<"Case "<<i<<":"<<endl;
    while(cin>>n)
    {
        if(n=="VISIT")
        {
            cin>>str;
            backward.push(str);
            cout<<str<<endl;
            while(!forwar.empty())
            {
                forwar.pop();
            }
        }
        else if(n=="BACK")
        {
            int a=backward.size();
            if(a==1)
            {
                cout<<"Ignored"<<endl;
            }
            else
            {
                forwar.push(backward.top());
                backward.pop();
                cout<<backward.top()<<endl;
            }
        }
        else if(n=="FORWARD")
        {
            int a=forwar.size();
            if(a==0)
                cout<<"Ignored"<<endl;
            else
            {
                backward.push(forwar.top());
                forwar.pop();
                cout<<backward.top()<<endl;
            }
        }
        else{
                while(!backward.empty())
                backward.pop();
        while(!forwar.empty())
            forwar.pop();
        break;
        }
    }
    }
    return 0;
}

