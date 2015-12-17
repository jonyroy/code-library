//8.insert an item in a linear array.
#include<bits/stdc++.h>
using namespace std;
class Array
{
   int a[1000],n;
   public:
   void input();
   void insert_item(int,int);
   void display();
};
void Array::input()
{
   cout<<"Enter Item Number=";
   cin>>n;
   for(int i=1;i<=n;i++)
   cin>>a[i];
}
void Array::insert_item(int loc,int item)
    {
        for(int i=n;i>=loc;i--)
        a[i+1]=a[i];
        a[loc]=item;
        n++;
    }
void Array::display()
{
  for(int i=1;i<=n;i++)
  cout<<a[i]<<" ";
}
int main()
{
  Array a;
  a.input();
  int loc,item;
  cin>>loc>>item;
  a.insert_item(loc,item);
  a.display();
}
