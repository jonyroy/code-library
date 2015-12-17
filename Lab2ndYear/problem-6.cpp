//find factorial
#include<bits/stdc++.h>
using namespace std;
class Factorial
{
  long long int n,m;
  public:
  void input();
  int find_factorial(int);
  void output();
};
int Factorial::find_factorial(int a)
{
   if(a==0)
   return 1;
   else
   return (a*find_factorial(a-1));
}
int main()
{
   Factorial a;
   int c;
   cin>>c;
   int b=a.find_factorial(c);
   cout<<b;
   return 0;
}
