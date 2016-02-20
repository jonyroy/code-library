/*
 Euler’s totient function
The number of positive integers, not greater than n, and relatively prime
with n, equals to Euler’s totient function φ (n). In symbols we can state that

φ (n) ={a Î N: 1 ≤ a ≤ n, gcd(a, n) = 1}
This function has the following properties:
    If p is prime, then φ (p) = p – 1 and φ (pa) = p a * (1 – 1/p) for any a.
    If m and n are coprime, then φ (m * n) = φ (m) * φ (n).
    If n = , then Euler function can be found using formula:
φ (n) = n * (1 – 1/p 1) * (1 – 1/p 2) * ... * (1 – 1/p k)
*/
#include<bits/stdc++.h>
using namespace std;

//Euler phi function....................
int phi( int n )
{
	int result = n ;
	for( int i=2; i*i<=n; ++i )
		if ( n % i == 0 )
		{
			while(n%i==0)
				n/=i ;
			result-=result/i ;
		}
	if(n>1)
		result-=result/n;
	return result ;
}
/*Sum of the positive integers which are less than n and relatively
prime to n is (1/2)*n*phi(n)
*/
long sum_relatively_prime(int n)
{
    return (n*phi(n))/2;
}
int main()
{
    int x;
    long cnt=0;
        for(x=1;x<=20;x++)
        cnt=cnt+phi(x);
        cout<<cnt<<endl;
    while(cin>>x)
    {

        cout<<phi(x)<<endl;
    }
    return 0;
}


