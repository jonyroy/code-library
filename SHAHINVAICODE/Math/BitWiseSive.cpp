#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <stdio.h>
#include <string.h>
#include<math.h>
#include <cstdio>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
 bool check(int N,int pos)
{
    return(bool)(N&(1<<pos));
}
int Set(int N,int pos)
{
    return N=N|(1<<pos);
}
int N=300;
int status[100];
void BitWisesive()
{
    int i,j,sqrtN;
    for( i = 2; i <= N; i++ )
    status[i] = 0;
    sqrtN=int(sqrt(N));
    for(i=3;i<=sqrtN;i+=2)
    {
        if(check(status[i>>5],i&31)==0)// if(check(status[i/32],i%32)==0)
        {
            for(j=i*i;j<=N;j+=2*i)
            {
                status[j>>5]=Set(status[j>>5],j&31);//status[j/32]=Set(status[j/32],j%32);
            }
        }
    }
    puts("2");
for(i=3;i<=N;i+=2)
if( check(status[i>>5],i&31)==0)//if( check(status[i/32],i%32)==0)
printf("%d\n",i);

}
int main()
{
BitWisesive();
    return 0;
}
