//1.write an object oriented program to illustrate linear search algorithm.
#include<bits/stdc++.h>
using namespace std;
class LinearS
{
   int a[1000],n;
   public:
   void input();
   int process(int);
};
void LinearS::input()
{
  cout<<"Enter Number Of Item.\n";
  cin>>n;
  cout<<"Enter Items\n";
  for(int i=1;i<=n;i++)
  cin>>a[i];
}
int LinearS::process(int b)
{
   for(int i=1;i<=n;i++)
   if(a[i]==b)
   return i;
   return 0;
}
int main()
{
    int n;
    LinearS a;
    a.input();
    cout<<"Enter Item=";
    cin>>n;
    int m=a.process(n);
    if(m)
    cout<<"Found Item.\n";
    else
    cout<<"Item Not Found In The List.\n";
    return 0;
}
