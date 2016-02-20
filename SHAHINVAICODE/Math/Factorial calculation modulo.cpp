/*
 Factorial calculation modulo

In some cases it is necessary to consider on some simple module p complex
formulas, which may contain, including factorials. Here we consider the
case when the module p relatively small. It is clear that this problem only
makes sense if the factorial and included in the numerator and the denominator
of the fractions. Indeed, the factorial p! and subsequent turn to zero modulo
p , But all the factors fractions containing p Can be reduced, and the
resulting expression has to be different from zero modulo p .
*/
#include<bits/stdc++.h>
using namespace std;

 int factmod ( int n, int p )
 {
	int res = 1 ;
	while (n>1)
	{
		res =(res*((n/p)%2?p-1:1))%p ;
		for (int i=2; i<=n%p; ++i)
			res =(res*i)%p ;
		n/=p ;
	}
	return res % p ;
}
int main()
{
    int n,p;
    while(cin>>n>>p)
    {
        cout<<factmod(n,p)<<endl;
    }
    return 0;
}


