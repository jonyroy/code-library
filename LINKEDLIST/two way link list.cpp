#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
int avail=10,start=5;
int info[200]={0,10,20,25,15,17,18,100,200,300};
int b_link[200]={0,9,1,2,3,4,5,6,7,8};
int f_link[200]={0,2,3,4,5,6,7,8,9,1};
int traverse(int info[],int f_link[],int sta)
{
    int str=f_link[sta];
    while(str!=sta)
    {
        cout<<info[str]<<" ";
        str=f_link[str];
    }
    cout<<endl;
    return 0;
}
int back_traverse(int info[],int b_link[],int sta)
{
    int str=b_link[sta];
    while(str!=sta)
    {
        cout<<info[str]<<" ";
        str=b_link[str];
    }
    cout<<endl;
    return 0;
}
int delete_node(int info[],int f_link[],int b_link[],int avail,int loc)
{
     f_link[b_link[loc]]=f_link[loc];
     b_link[f_link[loc]]=b_link[loc];
     f_link[loc]=avail;
     avail=loc;
    return 0;
}
int insertion(int info[],int f_link[],int b_link[],int avail,int loc,int item)
{
    if(avail==0)
    {
        cout<<"OverFlow.\n";
        return 0;
    }
    int save=avail;
    avail=f_link[avail];
    info[save]=item;
    f_link[save]=f_link[loc];
    b_link[save]=loc;
    f_link[loc]=save;
    b_link[f_link[loc]]=save;
    return 0;
}
int main()
{
      for(int i=10;i<199;i++)
      f_link[i]=i+1;
      f_link[199]=0;
      cout<<"Forward Traverse   1\n";
      cout<<"Backward Traverse 2\n";
      cout<<"Delete              3\n";
      cout<<"Insertion             4\n";
      int t;
      while(cin>>t)
        {
      switch(t)
      {
          case 1:
          {
              int n;
              cout<<"Enter Start=\n";
              cin>>n;
              traverse(info,f_link,n);
              break;
          }
          case 2:
            {
              int n;
              cout<<"Enter Start=\n";
              cin>>n;
              back_traverse(info,b_link,n);
              break;
            }
          case 3:
            {
                int n;
                cout<<"Enter Location=\n";
                cin>>n;
                delete_node(info,f_link,b_link,avail,n);
                break;
            }
          case 4:
            {
                int n,m;
                cout<<"Enter Location =\n";
                cin>>n;
                cout<<"Enter Value=\n";
                cin>>m;
                insertion(info,f_link,b_link,avail,n,m);
                break;
            }
      }
      }
    return 0;
}
