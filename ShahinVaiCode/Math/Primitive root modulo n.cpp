/*
Primitive root modulo n

 In modular arithmetic, a branch of number theory, a number g is a primitive
 root modulo n if every number coprime to n is congruent to a power of g modulo
 n. In other words, g is a generator of the multiplicative group of integers
 modulo n. That is, for every integer a coprime to n, there is an integer k
 such that gk ≡ a (mod n). Such k is called the index or discrete logarithm
 of a to the base g modulo n.
 Examples
For example, if n = 14 then the elements of Zn× are the congruence
classes {1, 3, 5, 9, 11, 13}; there are φ(14) = 6 of them. Here is a table of
their powers modulo 14:
 x     x, x2, x3, ... (mod 14)
 1 :   1
 3 :   3,  9, 13, 11,  5,  1
 5 :   5, 11, 13,  9,  3,  1
 9 :   9, 11,  1
11 :  11,  9,  1
13 :  13,  1

The order of 1 is 1, the orders of 3 and 5 are 6, the orders of 9 and 11 are 3,
 and the order of 13 is 2. Thus, 3 and 5 are the primitive roots modulo 14.
For a second example let n = 15. The elements of Z15× are the congruence
classes {1, 2, 4, 7, 8, 11, 13, 14}; there are φ(15) = 8 of them.
 x     x, x2, x3, ... (mod 15)
 1 :   1
 2 :   2,  4,  8, 1
 4 :   4,  1
 7 :   7,  4, 13, 1
 8 :   8,  4,  2, 1
11 :  11,  1
13 :  13,  4,  7, 1
14 :  14,  1

Since there is no number whose order is 8, there are
no primitive roots modulo 15.
Let p=2^32-2^20+1. Then p is of the form k*n+1, that is needed for doing number
theoretic transforms upto length n=2^20. The factorization of p-1 is

p-1=2^20*3^2*5*7*13.

Now start testing numbers a=2, 3, 5, 7,... and see if

a^((p-1)/2) != 1 (mod p)
a^((p-1)/3) != 1 (mod p)
a^((p-1)/5) != 1 (mod p)
a^((p-1)/7) != 1 (mod p)
a^((p-1)/13) != 1 (mod p)

(the first a for which this should occur is a=19).
*/
#include<bits/stdc++.h>
using namespace std;
int powmod ( int a, int b, int p )
{
	int res = 1 ;
	while ( b )
		if ( b & 1 )
			res = int ( res * 1ll * a % p ) ,  --b ;
		else
			a = int ( a * 1ll * a % p ) ,  b >>= 1 ;
	return res ;
}

int generator ( int p )
{
	vector < int > fact ;
	int phi = p - 1 ,  n = phi ;
	for ( int i = 2 ; i * i <= n ; ++ i )
		if ( n % i == 0 )
		{
			fact. push_back ( i ) ;
			while ( n % i == 0 )
				n /= i ;
		}
	if ( n > 1 )
		fact. push_back ( n ) ;
int cnt=0;
	for ( int res = 2 ; res <= p ; ++ res )
	{
		bool ok = true ;
		for (int i = 0 ; i < fact. size (); ++ i )
			if(powmod ( res, phi/fact [ i ] , p )==1)
			{
			    ok=false;
			    break;
			}
		   if(ok)
		  {
		      cout<<res<<" ";
		      cnt++;
		  }
	}
	return cnt ;
}

int main()
{
    int n;
    while(cin>>n)
    {
        cout<<endl<<generator(n)<<endl;
    }
    return 0;
}


