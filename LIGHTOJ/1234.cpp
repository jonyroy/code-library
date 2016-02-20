/*
* Author: Jony Roy
* Date: 12-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
#define PI 3.1415926535897932384
#define p_b(x) push_back(x)
#define m_p(x) make_pair(x)
#define ft first
#define sd second
using namespace std;
typedef long long int llint;
typedef unsigned long long int ullint;
typedef long int lint;
typedef unsigned int uint;
typedef unsigned long int ulint;
typedef pair<int,int> pint;
typedef pair<lint,lint> plint;
typedef pair<llint,llint> pllint;

int main()
{
    double Hn[100005]= {0.0};
    double sum=1.0;
    lint t=0;
    for(lint i=2; i<=100000000; i++)
    {
        sum+=(double)1.0/(double)i;
        lint a=i/1000;
        if(a!=t)
         {
            Hn[a]=sum;
            t=a;
        }
    }
    int TestCase;
    scanf("%d",&TestCase);
    for(int i=1; i<=TestCase; i++)
    {
        lint n;
        scanf("%ld",&n);
        lint a=n/1000;
        double s=Hn[a];
        lint b=a*1000+1;
        for(lint j=b; j<=n; j++)
        s+=(1.0/(double)j);
        printf("Case %d: %.10lf\n",i,s);
    }
    return 0;
}

