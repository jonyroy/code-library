#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include<math.h>
using namespace std;

struct node
{
    int a;
    int b;
}A[100];

int main(){
   long n,m,i,j,k,l,a,a1,r,qu,nx;
 // int ar[1000];
  priority_queue<long> q;
  vector<pair<long,long> > b;
  cin >> n>>qu;
  for(i=0;i<n;i++)
  {
      scanf("%ld",&m);
      v.push(m);
  }
  long int max=0;
  for(i=0;i<qu;i++)
   {
       scanf("%ld%ld",&l,&r);
       b.push_back(make_pair(l,r));
       if(r>max)
       max=r;
   }

   sort(b.begin(), b.end());
  //scan across
  j=0;

  do
  {
    a=b[j].first;
    a1=b[j].second*(-1);
    //p++;
    q.push(a1);
    while(a==b[j+1].first)
    {
        j++;
        a1=b[j].second*(-1);
        q.push(a1);
    }

    a1=q.top()*(-1);

    if(j<qu-1)
    {
        nx=b[j+1].first;
    }
    else
    nx=max+1;


    while(a<nx)
    {
        if(a<=a1)
        {
            cnt.push(q.size());
            a++;
           // cout<<q.size()<<endl;
        }
        else
        {
            if (!q.empty())
            {
                q.pop();
                while(a1==q.top()*(-1))
                q.pop();
                a1=q.top()*(-1);
            }
            cnt.push(q.size());
            a++;
        }
    }
    j++;

  }while(nx<max);
  long long sum=0,mv,av;

  while (!v.empty()&&!cnt.empty())
  {
      //cout<<cnt.top()<<endl;
     mv= v.top();
     v.pop();
     av=cnt.top();
     mv=mv*av;
     cnt.pop();
     sum=sum+mv;

  }

 printf("%I64d",sum);
  return 0;
}
