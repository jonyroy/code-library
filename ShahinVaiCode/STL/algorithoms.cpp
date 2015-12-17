#include<bits/stdc++.h>
using namespace std;
int v[100000];
int search(int value,int left,int right)
{
    int mid;
    if(right<left)
       return right;
     mid=floor((left+right)/2);
    if(v[mid]==value)
       return mid;
    if(v[mid]>value)
       search(value,left,mid-1);
    else
       search(value,mid+1,right);

}
int main()
{
    int i;
    vector<int>v;
    int myints[] = {10,20,30,30,20,10,10,20};   // 8 elements
   int mycount ;//= count (myints, myints+8, 30);
   v.assign (myints,myints+8);

   mycount = count (v.begin(), v.end(), 30);
   cout<<mycount<<endl;

   cout<<"Sorting"<<endl;
   sort(v.begin(),v.end());
   for(i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   cout<<endl;

   cout<<"Binary_search"<<endl;
   if(binary_search (v.begin(), v.end(), 30))
   cout<<"value found."<<endl;
   else
   cout<<"NOt found."<<endl;

   std::vector<int>::iterator low,up;
  low=std::lower_bound (v.begin(), v.end(), 20); //          ^
  up= std::upper_bound (v.begin(), v.end(), 20); //                   ^

  std::cout << "lower_bound at position " << (low- v.begin()) << '\n';
  std::cout << "upper_bound at position " << (up - v.begin()) << '\n';

  //next_permutation(myints,myints+3)
  cout<<"Next permutation."<<endl;
  next_permutation(v.begin(),v.end());
  for(i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   cout<<endl;

   cout<<"Previus permutation."<<endl;
   prev_permutation(v.begin(),v.end());
   for(i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   cout<<endl;

   cout<<"Rotate"<<endl;
   rotate(v.begin(),v.begin()+3,v.end());
   for(i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   cout<<endl;

   //unique
   cout<<"Unique"<<endl;
   std::vector<int>::iterator it;
  it = std::unique (v.begin(), v.end());   // 10 20 30 20 10 ?  ?  ?  ?
  v.resize( std::distance(v.begin(),it) ); // 10 20 30 20 10
  for(i=0;i<v.size();i++)
   cout<<v[i]<<" ";
   cout<<endl;

   int first[] = {5,10,15,20,25};
  int second[] = {50,40,30,20,10};
  std::vector<int> b(10);                      // 0  0  0  0  0  0  0  0  0  0
//  std::vector<int>::iterator it;
cout<<"Two set Union"<<endl;
  std::sort (first,first+5);     //  5 10 15 20 25
  std::sort (second,second+5);   // 10 20 30 40 50
  it=std::set_union (first, first+5, second, second+5, b.begin());
                                               // 5 10 15 20 25 30 40 50  0  0
  b.resize(it-b.begin());                      // 5 10 15 20 25 30 40 50
   for(i=0;i<b.size();i++)
   cout<<b[i]<<" ";
   cout<<endl;

   cout<<"Intersection"<<endl;
   b.resize(10);
   it=std::set_intersection (first, first+5, second, second+5, b.begin());
                                               // 10 20 0  0  0  0  0  0  0  0
  b.resize(it-b.begin());
  for(i=0;i<b.size();i++)
   cout<<b[i]<<" ";
   cout<<endl;

   cout<<"Difference"<<endl;
   b.resize(10);
   it=std::set_difference (first, first+5, second, second+5, b.begin());
                                               //  5 15 25  0  0  0  0  0  0  0
  b.resize(it-b.begin());
  for(i=0;i<b.size();i++)
   cout<<b[i]<<" ";
   cout<<endl;
    return 0;
}


