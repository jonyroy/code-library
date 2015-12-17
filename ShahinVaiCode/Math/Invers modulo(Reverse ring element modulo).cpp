#include<bits/stdc++.h>
using namespace std;

int gcdex( int a, int b, int & x, int & y )
{
	if ( a == 0 )
	{
		x = 0 ; y = 1 ;
		return b ;
	}
	int x1, y1 ;
	int d = gcdex( b % a, a, x1, y1 ) ;
	x = y1 - ( b / a ) * x1 ;
	y = x1 ;
	return d ;
}
int main()
{
    int x, y,m,a;
    cin>>a>>m;
    int g = gcdex(a,m,x,y) ;
    if ( g!= 1 )
	cout << "no solution" ;
    else
    {
	   x =(x%m+m)%m ;
	  cout << x ;
    }
    return 0;
}


