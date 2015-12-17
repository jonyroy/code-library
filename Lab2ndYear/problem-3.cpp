//3.insertion sort algorithm.
#include<bits/stdc++.h>
using namespace std;
class Insertion
{
   int a[1000],n;
   public:
   void input();
   void insertion_sort();
   void display();
};
void Insertion::input()
{
   cout<<"Enter Item Number.\n";
   cin>>n;
   cout<<"Enter Items=";
   for(int i=1;i<=n;i++)
   cin>>a[i];
}
void Insertion::insertion_sort()
{
   a[0]=-88888888;
  for(int i=2;i<=n;i++)
  {
     int temp=a[i],ptr=i-1;
     while(temp<a[ptr])
     {
       a[ptr+1]=a[ptr];
       ptr--;
     }
     a[ptr+1]=temp;
  }
}
void Insertion::display()
{
   for(int i=1;i<=n;i++)
   cout<<a[i]<<" ";
}
int main()
{
   Insertion a;
   a.input();
   a.insertion_sort();
   a.display();
   return 0;
}
