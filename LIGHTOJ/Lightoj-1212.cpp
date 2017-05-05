/*
* Author: Jony Roy
* Date: 26-02-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

int main(int argc, char const *argv[])
{
    int TestCase;
    scanf("%d",&TestCase);
    for (int i = 1; i <= TestCase; ++i)
    {
      int a[30];
      int righ=16;
      int lef=15;
      int n,m;
      cin>>n>>m;
      printf("Case %d:\n",i );
      int counter=0;
      for(int j=1;j<=m;j++)
      {
      	string s;
      	int b;
      	cin>>s;
      	if(s=="pushLeft")
      	{
      		cin>>b;
      		if(counter+1<=n)
      		{
      			a[lef]=b;
      			lef--;
      			counter++;
      			printf("Pushed in left: %d\n",b);
      		}
      		else
      		printf("The queue is full\n");
      	}
      	else if(s=="pushRight")
      	{
      		cin>>b;
      		if(counter+1<=n)
      		{
               a[righ]=b;
               righ++;
               counter++;
               printf("Pushed in right: %d\n",b);
      		}
      		else
      		printf("The queue is full\n");
      	}
      	else if(s=="popLeft")
      	{
            if(counter)
            {
               printf("Popped from left: %d\n",a[lef+1]);
               lef++;
               counter--;
            }
            else
            printf("The queue is empty\n");
      	}
      	else
      	{
      		if(counter)
      		{
      			printf("Popped from right: %d\n",a[righ-1]);
      			righ--;
      			counter--;
      		}
      		else
      		printf("The queue is empty\n");
      	}
      }
    }
    return 0;
}
