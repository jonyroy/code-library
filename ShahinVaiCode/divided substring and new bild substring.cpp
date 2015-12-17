#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;

string fa[30]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};

int main()
{
    map<string,int>m;
    queue<string> q;
    int i,a,n,s,l,j,k;
    scanf("%d",&n);
    string str;
    for(k=1;k<=n;k++)
    {
        cin>>str;
        l=str.size();
        for(i=1;i<=l;i++)
        {
            for(j=0;j<l;j++)
            {
                string sus=str.substr(j,i);
               // cout<<sus<<" ";
                m[sus]++;

            }
        }
    }

    for(j=0;j<26;j++)
        if(m[fa[j]]==0)
        {
            str=fa[j];
        cout<<str;
        return 0;
       }
       else
       q.push(fa[j]);
    while(!q.empty())
    {
       str=q.front();
	   q.pop();
        for(j=0;j<26;j++)
        if(m[str+fa[j]]==0)
        {
            str=str+fa[j];
        cout<<str;
        return 0;
       }
       else
       q.push(str+fa[j]);

    }



    return 0;
}
