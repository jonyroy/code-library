//Pyramids
#include<bits/stdc++.h>
using namespace std;
class Pyramids
{
    int n;
public:
    bool input();
    void output();
};

bool Pyramids::input()
{
    cin>>n;
    if(n)
    return true;
    return false;
}
void Pyramids::output()
{
    int m=n/2+1;
    int b=n/2;
    for(int i=1;i<=n;i+=2)
    {
       for(int j=b;j>=1;j--)
        cout<<" ";
       for(int j=1;j<=i;j++)
        cout<<"*";
       cout<<endl;
       b--;
    }
}
int main()
{
    Pyramids a;
    while(a.input())
    {
        a.output();
        cout<<endl;
    }
    return 0;
}
