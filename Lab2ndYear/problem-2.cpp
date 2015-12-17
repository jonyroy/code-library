//2.bubble sort algorithm.
#include<bits/stdc++.h>
using namespace std;
class BubbleS
{
   int a[1000],n;
   public:
   void input();
   void bubblesort();
   void display();
};
void BubbleS::input()
{
   cout<<"Enter Item Number.\n";
   cin>>n;
   cout<<"Enter Items\n";
   for(int i=1;i<=n;i++)
   cin>>a[i];
}
void BubbleS::bubblesort()
{
   for(int i=1;i<n;i++)
   {
     for(int j=1;j<=n-i;j++)
     if(a[j]>a[j+1])
     swap(a[j],a[j+1]);
   }
}
void BubbleS::display()
{
  for(int i=1;i<=n;i++)
  cout<<a[i]<<" ";
}
int main()
{
  BubbleS a;
  a.input();
  a.bubblesort();
  a.display();
  return 0;
}
