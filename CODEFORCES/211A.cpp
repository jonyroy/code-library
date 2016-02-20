#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[50][50]={"O-|-OOOO","O-|O-OOO","O-|OO-OO","O-|OOO-O","O-|OOOO-","-O|-OOOO","-O|O-OOO","-O|OO-OO","-O|OOO-O","-O|OOOO-"};
    int n;
    cin>>n;
    do
    {
       int b=n%10;
       n=n/10;
       cout<<a[b]<<endl;
    }
    while(n);
    return 0;
}
