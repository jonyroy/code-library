/*
* Author: Jony Roy
* Date: 07-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int lenLcs[1000][1000];
int LongestCommonSubsequence(string a,string b)
{
   for(int i=0;i<a.size();i++)
   {
       for(int j=0;j<b.size();j++)
       {
           if(a[i]==b[j])
            lenLcs[i+1][j+1]=lenLcs[i][j]+1;
           else
            lenLcs[i+1][j+1]=max(lenLcs[i+1][j],lenLcs[i][j+1]);
       }
   }
   return lenLcs[a.length()][b.length()];
}
int main()
{
    string a,b;
    cin>>a>>b;
    cout<<LongestCommonSubsequence(a,b)<<endl;
    return 0;
}
