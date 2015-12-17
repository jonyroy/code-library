//preorder traverse algorithm of a tree.
#include<bits/stdc++.h>
using namespace std;
class Preorder
{
   int left[1000],right[1000],tree[1000],n;
   public:
   void input();
   int preorder_walk(int);
};
void Preorder::input()
{
  cout<<"Enter Node Number=";
  cin>>n;
  cout<<"Enter Node With Left And Right Child.\n";
  for(int i=1;i<=n;i++)
  {
  cin>>tree[i]>>left[i]>>right[i];
  }
}
int Preorder::preorder_walk(int start)
{
    if(start==0)
    return 0;
    cout<<tree[start]<<endl;
    preorder_walk(left[start]);
    preorder_walk(right[start]);
    return 0;
}
int main()
{
    int root;
    Preorder a;
    a.input();
    cout<<"Enter Root=";
    cin>>root;
    a.preorder_walk(root);
    return 0;
}
