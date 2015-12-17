/*
Gray code numbering system is defined to be a non-negative integers,
 where codes of two adjacent numbers differ in exactly one bit.

For example, for numbers of length 3 bits have a sequence of
Gray codes: 000 , 001 , 011 , 010 , 110 , 111 , 101 , 100 . Eg G (4) = 6 .

This code was invented by Frank Gray (Frank Gray) in 1953.

Finding the Gray code

Consider the number of bits n bits and the number G (n) .
Note that i Th bit G (n) equal to unity only when i Th
bit n equal to one and i +1 -Th bit is zero,
or vice versa ( i Th bit is zero, and i +1 Th is equal to unity.)
Thus, we have: G (n) = n XOR (n >> 1)
*/
#include<bits/stdc++.h>
using namespace std;

int gray( int n )
{
	return n^(n>>1) ;
}

int rev_g( int g )
{
	int n = 0 ;
	for ( ; g ; g>>=1 )
		n^= g ;
	return n ;
}
int main()
{
    int n,g;
   while( cin>>n)
   {
    g=gray(n);
    cout<<g<<endl;
    cout<<rev_g(g)<<endl;
   }
    return 0;
}


