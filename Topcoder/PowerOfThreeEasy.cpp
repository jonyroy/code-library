#include<bits/stdc++.h>
using namespace std;
class PowerOfThreeEasy {
	public:
	string ableToGet(int x, int y) {
		map<long,int>a;
		long sum=0;
		for(int i=0;i<=19;i++)
        {
            double b=pow(3,i);
            long int c=(long)b;
            if(sum+c>2000000000)
                break;
            sum+=c;
            a[sum]=1;
        }
        if(a[x]&&a[y])
            return "Possible";
        else
            return "Impossible";
	}
};
