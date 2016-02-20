/*
Find Fibonacci Number:
Version 3: matrix multiplication

Furthermore, we can even cut down the time complexity to O(log(N))
 by computing the multiplication of N matrices.

*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
/* [1,1,1,0]^n=[F(n+1),Fn,Fn,F(n-1)]*/
//Find power using Binary exponentiation
ll binpow(int n )
{
    ll a[]={1,1,1,0};
	ll r[]={1,0,0,1};
	ll b[4];
	while ( n )
	{
		if(n&1)
         {//res*=a ;
          b[0]=a[0]*r[0]+a[1]*r[2];
          b[1]=a[0]*r[1]+a[1]*r[3];
          b[2]=a[2]*r[0]+a[3]*r[2];
          b[3]=a[2]*r[1]+a[3]*r[3];
          r[0]=b[0];r[1]=b[1];r[2]=b[2];r[3]=b[3];
         }
		//a*=a ;
		b[0]=a[0]*a[0]+a[1]*a[2];
		b[1]=a[0]*a[1]+a[1]*a[3];
		b[2]=a[0]*a[2]+a[2]*a[3];
		b[3]=a[1]*a[2]+a[3]*a[3];
		a[0]=b[0];a[1]=b[1];a[2]=b[2];a[3]=b[3];
		n>>=1 ;
	}
	return r[1] ;
}
int main()
{
    int n;
   while( cin>>n){
    cout<<binpow(n)<<endl;
   }
    return 0;
}


