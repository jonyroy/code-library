#include<iostream>
using namespace std;
int First_patern_matching(string s,string p)
{
    int l,r;
    l=s.size();
    r=p.size();
    int k=1,MAX=l-r+1,i;
    while(k<=MAX)
    {
        for(i=0;i<r;i++)
        {
            if(p[i]!=s[k+i-1])
            {
                k++;
                break;
            }
        }
        if(r==i)
        {
            return k;
            break;
        }
    }
    if(r!=i)
    return 0;
}
int main()
{
    string s,p;
    int n;
    cout<<"How many you want to take input"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the text: ";
        cin>>s;
        cout<<"Enter the patern: ";
        cin>>p;
        int m=First_patern_matching(s,p);
        cout<<m<<endl;
    }
    return 0;
}
