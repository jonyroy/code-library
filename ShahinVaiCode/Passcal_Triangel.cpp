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
vector<int> Passcl[100];
void PasscalTri()
{
    int i,j,p;
    Passcl[0].push_back(1);
    for(i=1;i<100;i++)
    {
        Passcl[i].push_back(1);
        for(j=1;j<i;j++)
        {
            p=Passcl[i-1][j-1]+Passcl[i-1][j];
            Passcl[i].push_back(p);
        }
        Passcl[i].push_back(1);
    }
}


int main()
{
   PasscalTri();
   int n,r;
   while(scanf("%d%d",&n,&r))
   {
       printf("nCr(%d,%d)= %d\n",n,r,Passcl[n][r]);
   }

  return 0;
}
