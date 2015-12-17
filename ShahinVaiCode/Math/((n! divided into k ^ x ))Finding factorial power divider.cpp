/*
 Finding factorial power divider

Given two numbers: n and k . Required to calculate with any degree of
the divisor k among n! Ie find the greatest x such that n! divided into k ^ x .
*/
#include<bits/stdc++.h>
using namespace std;
//n! divided into k ^ x and here x?
int fact_pow ( int n, int k )
{
	int res = 0 ;
	while ( n )
	{
		n /= k ;
		res += n ;
	}
	return res ;
}
int main()
{
    int n,k;
    while(cin>>n>>k)
    {
        cout<<fact_pow(n,k)<<endl;
    }
    return 0;
}


