/*
Goldbach's Conjecture:
For any integer n (n ≥ 4) there exist two prime numbers p1 and p2
such that p1 + p2 = n. In a problem we might need to find the
number of essentially different pairs (p1, p2), satisfying the
condition in the conjecture for a given even number n (4 ≤ n ≤ 2 15).
(The word ‘essentially’ means that for each pair (p1, p2) we have p1 ≤ p2.)
For example, for n = 10 we have two such pairs: 10 = 5 + 5 and 10 = 3 + 7.
The function FindSol(n) finds the number of different pairs (p1, p2),
 for which n = p1 + p2. As p1 ≤ p2, we have p1 ≤ n/2. So to solve the
 problem we need to find the number of pairs (i, n – i), such that
 i and n – i are prime numbers and 2 ≤ i ≤ n/2.
*/
#include<bits/stdc++.h>
using namespace std;

#define MAX 10000000
bool primes[MAX];
  void gen_primes()
   {
       int i,j;
       for(i=0;i<MAX;i++) primes[i] = 1;
       for(i=2;i<=(int)sqrt(MAX);i++)
         if (primes[i])
           for(j=i;j*i<MAX;j++) primes[i*j] = 0;
   }
   int FindSol(int n)
     {
       int i,res=0;
       for(i=2;i<=n/2;i++)
         if (primes[i] && primes[n-i]) res++;
       return res;
     }
int main()
{
  gen_primes();
  int n;
  while(cin>>n)
  {
     cout<<FindSol(n)<<endl;
  }
  return 0;
}
