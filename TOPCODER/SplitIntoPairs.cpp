#include<bits/stdc++.h>
using namespace std;
class SplitIntoPairs {
	public:
	int makepairs(vector <int> A, int X)
	{
		vector<int>B;
		map<int,int>m;
		map<int,int>:: iterator it;
		for(int i=0;i<A.size();i++)
        {
            m[A[i]]++;
        }
        for(it=m.begin();it!=m.end();it++)
        {
            int k=it->second;
            int l=it->first;
            if(k>=2)
            {
                B.push_back(l);
                B.push_back(l);
            }
            else
            B.push_back(l);
        }
        int jony=B.size();
        int cnt=0;
        for(int i=0;i<jony;i+=2)
        {
            if(B[i]<=0&&B[i+1]<=0&&(jony-1)>=(i+1))
                cnt++;
            else if(B[i]<=0&&B[i+1]>=0&&(jony-1)>=(i+1))
            {
                if((long long)(B[i]*B[i+1])>=(long long)X)
                    cnt++;
            }
            else if(B[i]>=0&&B[i+1]>=0&&(jony-1)>=(i+1))
                cnt++;
        }
        return cnt;
	}
};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
