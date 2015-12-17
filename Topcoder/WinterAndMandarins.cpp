#include<bits/stdc++.h>
using namespace std;
class WinterAndMandarins {
	public:
	int getNumber(vector <int> bags, int K)
	{
	   sort(bags.begin(),bags.end());
	   int n=bags.size();
	   int m=2000000000;
	   for(int i=0;i<n;i++)
       {
          if(i+K-1<n)
           m=min(m,(bags[i+K-1]-bags[i]));
       }
       return m;
	}
};
