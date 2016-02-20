#include<bits/stdc++.h>
using namespace std;
class LittleElephantAndDouble {
	public:
	string getAnswer(vector <int> A)
	{
		sort(A.begin(),A.end());
		for(int i=1;i<A.size();i++)
        {
            if(A[i]%A[0])
                return "NO";
            int m=A[i]/A[0];
            if(m>1)
            {
                double n=log((double)m)/log(2.0);
                int k=(int)n;
                double mm=pow(2,k);
                int b=(int)mm;
                cout<<n<<" "<<mm<<" "<<b<<endl;
                if(b!=m)
                return "NO";
            }
        }
        return "YES";
	}
};
