#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
#include<stdbool.h>
using namespace std;
int main()
{
    vector<int>n;
    n.resize(1000000);
    int m,cou=0;
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>n[i];
    sort(n.begin(),n.end());
    m--;
    bool test;
    while(1)
    {
        test=false;
        for(int i=m;i>=0;i--)
        {
            for(int j=i-1;j>=0;j--)
            {
                if(!binary_search(n.begin(),n.end(),n[i]-n[j]))
                {
                    n.push_back(n[i]-n[j]);
                    m++;
                    cou++;
                    test=true;
                    break;
                }
            }
            if(test)
                break;
        }
        if(!test)
        {
            if(cou%2)
            cout<<"Alice\n";
            else
            cout<<"Bob\n";
            return 0;
        }
        sort(n.begin(),n.end());
    }
    return 0;
}
