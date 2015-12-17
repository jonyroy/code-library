//Non Zero Digit of Factorial
#include<bits/stdc++.h>
using namespace std;
class factorial
{
    int n;
public:
    int right_digit();
    bool intput();
};
bool factorial::intput()
{
    cin>>n;
    if(n==0)
        return false;
    return true;
}
int factorial::right_digit()
{
    int sum=1;
    for(int i=1;i<=n;i++)
    {
        sum=sum*i;
        while(sum%10==0)
            sum/=10;
        sum%=100;
    }
    return sum;
}
int main()
{
    factorial a;
    while(a.intput())
    {
        cout<<a.right_digit()%10<<endl;
    }
    return 0;
}
