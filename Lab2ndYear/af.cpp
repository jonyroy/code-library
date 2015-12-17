#include<bits/stdc++.h>
using namespace std;
class add
{
   int a;
   public:
   void input();
   void operator-();
   void operator--();
   void operator--(int);
   void output()
   {
      cout<<a;
   }
};
void add::input()
{
   cin>>a;
}
void add::operator-()
{
   a=-a;
}
void add::operator--()
{
   a--;
}
void add::operator--(int)
{
   --a;
}
int main()
{
   add x;
   x.input();
   x--;
   --x;
   -x;
   x.output();
}
