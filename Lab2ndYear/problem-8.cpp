 //9.binary search algorithm.
#include<bits/stdc++.h>
using namespace std;
class BinaryS
{
   int a[1000],n;
   public:
   void input();
   int binarysearch(int);
};
void BinaryS::input()
{
   cout<<"Enter Item Number=";
   cin>>n;
   for(int i=1;i<=n;i++)
   cin>>a[i];
}
int BinaryS::binarysearch(int item)
{
   int mid,beg=1,End=n;
   while(beg<=End)
   {
      mid=(beg+End)/2;
      if(a[mid]==item)
      return mid;
      else if(a[mid]<item)
      beg=mid+1;
      else
      End=mid-1;
   }
   return 0;
}
int main()
{
  BinaryS a;
  int n;
  a.input();
  cout<<"Enter Searched Item=";
  cin>>n;
  int b=a.binarysearch(n);
  if(b)
  cout<<"Searched Item Found\n";
  else
  cout<<"Searched Item Not Found";
}
