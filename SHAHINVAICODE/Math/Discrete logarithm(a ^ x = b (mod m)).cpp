/*
Discrete logarithm problem is, according to an a , b , m solve the equation:

a ^ x = b (mod m)

where a and m - Coprime (note: if they are not relatively prime,
then the algorithm described below is incorrect, although presumably
it can be modified so that it was still working).
*/
#include<bits/stdc++.h>
using namespace std;

int powmod ( int a, int b, int m )
{
	int res = 1 ;
	while ( b > 0 )
		if ( b & 1 )
		{
			res = ( res * a ) % m ;
			--b ;
		}
		else
		{
			a = ( a * a ) % m ;
			b >>= 1 ;
		}
	return res % m ;
}

int solve ( int a, int b, int m )
{
	int n = ( int ) sqrt ( m + .0 ) + 1 ;
	map < int , int > vals ;
	for ( int i = n ; i >= 1 ; -- i )
		vals [ powmod ( a, i * n, m ) ] = i ;
	for ( int i = 0 ; i <= n ; ++ i )
	{
		int cur = ( powmod ( a, i, m ) * b ) % m ;
		if ( vals. count ( cur ) )
		{
			int ans = vals [ cur ] * n - i ;
			if ( ans < m )
				return ans ;
		}
	}
	return - 1 ;
}
/*Solution number 2*/
int solve1 ( int a, int b, int m )
{
	int n = ( int ) sqrt ( m + .0 ) + 1 ;

	int an = 1 ;
	for ( int i = 0 ; i < n ; ++ i )
		an = ( an * a )%m ;

	map < int , int > vals ;
	for ( int i = 1 , cur = an ; i <= n ; ++ i )
	{
		if ( ! vals. count ( cur ) )
			vals [ cur ] = i ;
		cur = ( cur * an )%m ;
	}

	for ( int i = 0 , cur = b ; i <= n ; ++ i )
	{
		if ( vals. count ( cur ) )
		{
			int ans = vals [ cur ] * n - i ;
			if ( ans < m )
				return ans ;
		}
		cur = ( cur * a )%m ;
	}
	return - 1 ;
}
int main()
{
    int a,b,m;
   while( cin>>a>>b>>m)
   {
    cout<<solve(a,b,m)<<endl;
    cout<<solve1(a,b,m)<<endl;
   }
    return 0;
}


