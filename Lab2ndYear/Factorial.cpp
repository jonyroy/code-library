#include<iostream>
using namespace std;
class fact
{
    long long Fact=1;
public:
    long long Factorial(int n)
    {
        if(n==0)
       return 1;
        Factorial(n-1);
        return (Fact*=n);
    }
};
int main()
{
    int n;
    fact f;
    cin>>n;
    if(n<=20)
    cout<<f.Factorial(n)<<endl;
    else
    cout<<"The output is very large."<<endl;
    return 0;
}
