/*
Binary exponentiation
Binary (binary) exponentiation - is a technique that allows to build
any number n -Th power for O (\ log n) multiplications
(instead n multiplications in the usual approach).
Note that for any number a and even number n doable obvious identity
(which follows from the associativity of multiplication)

a ^ n = (a ^ (n / 2)) ^ 2 = (a ^ (n / 2)) * (a ^ (n / 2))
It is the main method in binary exponentiation. Indeed, even for n
we showed how spending just one multiplication operation can reduce
the problem to a lesser extent twice.

It remains to understand what to do if the power n odd.
Here we do is very simple: go to the extent of n-1 Which will have an even:

a ^ n =( a ^ (n-1))* a

So, we actually found the recurrence formula: the degree n we move
, if it is even to n / 2 And otherwise - to n-1 . It is understood
that there will be no more than 2 \ log n transitions before
we come to n = 0 (Based recursive formula). Thus, we have an algorithm
that works for O (\ log n) multiplications.
*/
#include<bits/stdc++.h>
using namespace std;
/*Solution one */
int gcd ( int a, int b ) {
	if ( b == 0 )
		return a ;
	else
		return gcd ( b, a % b ) ;
}
/*Solution 2 */
int gcd1 ( int a, int b ) {
	return b ? gcd ( b, a % b ) : a ;
}
/*Solution 3 */
int gcd2 ( int a, int b ) {
	while(b)
	{
		a%=b ;
		swap(a,b) ;
	}
	return a ;
}
int lcm ( int a, int b ) {
	return a/gcd(a,b)*b ;
}
int main()
{
    int a,b;
   while( cin>>a>>b){
    cout<<gcd(a,b)<<endl;
    cout<<gcd1(a,b)<<endl;
    cout<<gcd2(a,b)<<endl;
   }
    return 0;
}


