//4.selection sort algorithm.
#include<bits/stdc++.h>
using namespace std;
class Selection
{
   int a[1000],n;
   public:
   void input();
   void selection_sort();
   void display();
};
void Selection::input()
{
   cout<<"Enter Item Number.\n";
   cin>>n;
   cout<<"Enter Items=";
   for(int i=1;i<=n;i++)
   cin>>a[i];
}
void Selection::selection_sort()
{
   for(int i=1;i<=n;i++)
   {
     int b=a[i],loc=i;
     for(int j=i+1;j<=n;j++)
     {
       if(b>a[j])
       loc=j,b=a[j];
     }
     swap(a[i],a[loc]);
   }
}
void Selection::display()
{
   for(int i=1;i<=n;i++)
   cout<<a[i]<<" ";
}
int main()
{
   Selection a;
   a.input();
   a.selection_sort();
   a.display();
   return 0;
}
