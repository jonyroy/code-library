#include<bits/stdc++.h>
using namespace std;
#define MP make_pair

typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
struct node
{
    int a;
    int b;
    int sum;
};
bool compear_one(const node f,const node s)
{
    return f.a<s.a;
}
bool compear_two(const node f,const node s)
{
    return f.a<s.a||f.a==s.a&&f.b<s.b;
}
bool compear_three(const node f,const node s)
{
    return f.a<s.a||f.a==s.a&&f.b<s.b||f.a==s.a&&f.b==s.b&&f.sum<s.sum;
}
void VectorSort()
{

    vector<int>v;
    vector<PII>pv;//vector<pair<int,int> >pv;
    vector<node>sv;
    vector<node>sv1;
    vector<node>sv2;
    int x,y,z;
    while(scanf("%d%d%d",&x,&y,&z)!=EOF)
    {
        v.push_back(x);
        pv.push_back(MP(x,y));//#define MP make_pair
        node n={x,y,z};
        sv.push_back(n);//push structure in vector
        sv1.push_back(n);//push structure in vector
        sv2.push_back(n);//push structure in vector

    }
    sort(v.begin(),v.end());//One dimention vector sort
    sort(pv.begin(),pv.end());//Pair vector sort
    sort(sv.begin(),sv.end(),compear_one);//Structure vector sort
    sort(sv1.begin(),sv1.end(),compear_two);//Structure vector sort
    sort(sv2.begin(),sv2.end(),compear_three);//Structure vector sort
    int l=sv.size();
    for(int i=0;i<l;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl<<"Pair"<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<pv[i].first<<" "<<pv[i].second<<endl;
    }
    cout<<"Structure One Compear"<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<sv[i].a<<" "<<sv[i].b<<" "<<sv[i].sum<<endl;
    }
    cout<<"Structure Two Compear"<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<sv1[i].a<<" "<<sv1[i].b<<" "<<sv1[i].sum<<endl;
    }
    cout<<"Structure Three Compear"<<endl;
    for(int i=0;i<l;i++)
    {
        cout<<sv2[i].a<<" "<<sv2[i].b<<" "<<sv2[i].sum<<endl;
    }
}
void VectorParameter(vector<int>& v)
{

}
void VectorDicliaretion()
{
     vector<int> v1;
     vector<int> v2 = v1;
     vector<int> v3(v1);
   // vector<int> v;
   // vector<int> v[10];//Two dimention decliaretion
    vector<int> v(20);//one dimention with size 20
   for(int i = 0; i < 20; i++)
   {
      v[i] = i+1;
   }
   v.resize(25);//size increment....
   for(int i = 20; i < 25; i++)
   {
      v[i] = i*2;
   }
   for(int i = 20; i < 25; i++)
   {
      v.push_back(i*2); // Writes to elements with indices [25..30), not [20..25) ! <
   }
}
void VectorAssign()
{
  vector<int> first;
  vector<int> second;
  vector<int> third;

  first.assign (7,100);             // 7 ints with a value of 100

  vector<int>::iterator it;
  it=first.begin()+1;

  second.assign (it,first.end()-1); // the 5 central values of first

  int myints[] = {1776,7,4};
  third.assign (myints,myints+3);   // assigning from array.

  cout << "Size of first: " << int (first.size()) << '\n';
  cout << "Size of second: " << int (second.size()) << '\n';
  cout << "Size of third: " << int (third.size()) << '\n';

}
void DeleteLastElement()
{
    vector<int> myvector;
  int sum =0;
  myvector.push_back (100);
  myvector.push_back (200);
  myvector.push_back (300);

  while (!myvector.empty())
  {
    sum=myvector.back();
    myvector.pop_back();
    cout<<sum<<endl;
  }

  cout << "The elements of myvector add up to " << sum << '\n';
}
int main()
{
    //VectorSort();
    DeleteLastElement();
    return 0;
}


