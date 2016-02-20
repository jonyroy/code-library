#include<bits/stdc++.h>
using namespace std;
class BigFatInteger2 {
	public:
	string isDivisible(int A, int B, int C, int D)
	{
		map<long int,long int>a,b;
		int k=2;
		set<long int>nm;
		int t=0;
        while(k<=(int)sqrt(A))
        {
            while(A%k==0)
            {
                A=A/k;
                a[k]+=(long)B;
            }
            if(t)
                k+=2;
            else
            k++;
            t=1;
        }
        if(A>1)
        a[A]+=(long)B;
        k=2;
        t=0;
        while(k<=(int)sqrt(C))
        {
            while(C%k==0)
            {
                C=C/k;
                nm.insert(k);
                b[k]+=(long)D;
            }
            if(t)
                k+=2;
            else
            k++;
            t=1;
        }
        if(C>1)
        nm.insert(C);
        b[C]+=(long)D;
        set<long int>::iterator it;
        for(it=nm.begin();it!=nm.end();it++)
        {
           long int jony=*it;
           if(b[jony]>a[jony])
            return "not divisible";
        }
        return "divisible";
	}
};
