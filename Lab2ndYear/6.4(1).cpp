#include<bits/stdc++.h>
using namespace std;
class coord
{
  int x,y;
  public:
  coord()
  {x=0,y=0;}
  coord(int i,int j){x=i,y=j;}
  void getxy()
  {
  cout<<x<<" "<<y<<endl;
  }
  void operator--()
  {x--,y--;}
  void operator--(int)
  {--x,--y;}
};
int main()
{
  coord a(10,10);
  a--;
  a.getxy();
  --a;
  a.getxy();
}
