#include<iostream>
using namespace std;
int main()
{

    long long int n;
    while(cin>>n)
    {
        if(n<0)
        break;
        if(n==1)
        cout<<"1%\n";
        else
        cout<<""<<n*25<<""<<"%""\n";
    }
    return 0;
}
