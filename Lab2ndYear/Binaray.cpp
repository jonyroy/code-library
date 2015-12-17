#include<iostream>
using namespace std;
class binary
{
    int a;
    long long int b;
public:
    void getdata(int x)
    {
        a=x;
        b=0;
    }
    int solve(int x)
    {
        if(x==0)
        return 0;
        solve(x/2);
        b=b*10+(x%2);
        return 0;
    }
    void display()
    {
        cout<<"The binary number of "<<a<<" is: "<<b<<endl;
    }
};
int main()
{
    int x;
    cin>>x;
    binary m;
    m.getdata(x);
    m.solve(x);
    m.display();
}
