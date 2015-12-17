#include<bits/stdc++.h>
using namespace std;
class SEARCH
{
public:
    int Linear_Search(int a[ ],int m,int n)
    {
        int Loc=1;
        while(a[Loc]!=m)
        {
            Loc++;
        }
        if(Loc==n+1)
        Loc=0;
        return Loc;
    }
};
int main()
{
    int n,a[140],m;
    SEARCH s;
    cout<<"Enter the number of array: ";
    cin>>n;
    cout<<"Insert the value: ";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<"Insert the ITEM: ";
    cin>>m;
    a[n+1]=m;
    cout<<s.Linear_Search(a,m,n)<<endl;
    return 0;
}
