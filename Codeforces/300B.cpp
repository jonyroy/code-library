#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    string  pokyman[15];
    cin>>n;
    vector<int>b;
    a=n;
    int poky=-1;
    while(a)
    {
        poky=max(poky,a%10);
        b.push_back(a%10);
        a=a/10;
    }
    for(int i=0;i<b.size();i++)
    {
        int joky=b[i];
        for(int j=0;j<poky;j++)
        {
            if(joky)
            {
                pokyman[j]+='1';
                joky--;
            }
            else
            pokyman[j]+='0';
        }
    }
    cout<<poky<<endl;
    for(int i=0;i<poky;i++)
    {
        reverse(pokyman[i].begin(),pokyman[i].end());
        int moky=atoi(pokyman[i].c_str());
        cout<<moky<<" ";
    }
    return 0;
}
