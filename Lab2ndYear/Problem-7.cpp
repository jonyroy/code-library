//Human Like Multiplication
#include<bits/stdc++.h>
using namespace std;
class Multi
{
    int n,m;
public:
    void mul();
    int input();
};
int Multi::input()
{
    cin>>n>>m;
    if(n==0&&m==0)
        return 0;
    return 1;
}
void Multi::mul()
{
  cout.width(15);
  cout<<n<<endl;
  int b=log10(m);
  cout.width(15-b-2);
  cout<<"x"<<" "<<m<<endl;
  cout<<"----------------\n";
  int s=m*n;
  for(int i=0;i<=b;i++)
  {
        int v=m%10;
        m=m/10;
        v=n*v;
        double p=(double)pow(10,i);
        v=v*p;
        int h=log10(n)+1+log10((int)p);
        cout.width(15);
        if(v==0)
        {
            string sss;
            for(int j=0;j<h;j++)
                sss+="0";
            cout<<sss<<endl;
        }
        else
        cout<<v<<endl;
  }
  cout<<"----------------\n";
  cout.width(15);
  cout<<s<<endl;
}
int main()
{
    Multi a;
    while(a.input())
    {
        a.mul();
    }
    return 0;
}
