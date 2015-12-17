#include<iostream>
using namespace std;
class Factorial
{
    int n;
    int fact;
public:
    void getinput(int a)
    {
        n=a;
    }
    void solve()
    {
        fact=1;
        int a2=0,a5=0;
        for(int i=1;i<=n;i++)
        {
            int k=i;
            while(k%2==0)
            {
                a2++;
                k=k/2;
            }
            while(k%5==0)
            {
                a5++;
                k=k/5;
            }
            fact=fact*k;
            fact=fact%10;
        }
        for(int i=1;i<=(a2-a5);i++)
        fact=(fact*2)%10;
    }
    void display()
    {
        cout<<"The rightmost non-zero digit in ";
        cout.width(5);
        cout<<n;
        cout<<"! is "<<fact<<endl;
    }
};
int main()
{
    Factorial f;
    int n;
    while(cin>>n)
    {
        if(n==0)
        break;
        f.getinput(n);
        f.solve();
        f.display();
    }
    return 0;
}
