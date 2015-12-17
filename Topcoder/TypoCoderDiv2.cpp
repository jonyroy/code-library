#include<bits/stdc++.h>
using namespace std;
class TypoCoderDiv2 {
	public:
	int count(vector <int> rating)
	{
		int m=rating.size();
		int test=0,t,c=0;
		for(int i=0;i<m;i++)
        {
           if(rating[i]>=1200)
            t=1;
           else
            t=0;
           if(test!=t)
           {
               c++;
               if(test)
                test=0;
                else
                test=1;
           }
        }
        return c;
	}
};
