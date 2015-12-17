#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>m;
    map<string,int>::iterator b;
    string a;
    printf("\nMap Example.\n Enter the five string:\n");
     for(i=0;i<5;i++)
    {
        cin>>a;
        m[a]++;
    }
    for(b=m.begin();b!=m.end();b++)
    {
    cout<<(*b).first<<" "<<(*b).second<<endl;
    }
    return 0;
}
