#include<iostream>
using namespace std;
class Array
{
    int a[100];
    int b;
    int c;
public:
    void getdata(int n)
    {
        cin>>a[0];
        b=a[0];
        c=0;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
            if(b<a[i])
            {
                b=a[i];
                c=i;
            }
        }
    }
    void display()
    {
        cout<<"The maximum number is "<<b<<" and it's position is "<<c+1<<endl;
    }
};
int main()
{
    Array Max;
    cout<<"How many get number:"<<endl;
    int n;
    cin>>n;
    Max.getdata(n);
    Max.display();
    return 0;
}
