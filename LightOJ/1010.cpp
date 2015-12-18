/*
* Author: Jony Roy
* Date: 08-02-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int TestCase,i=0;
    cin>>TestCase;
    while(TestCase--)
    {
        long int row,column;
        scanf("%ld%ld",&row,&column);
        if(row==1||column==1)
        {
        printf("Case %ld: %ld\n",++i,max(row,column));
        }
        else if(row==2||column==2)
        {
            long int n=row*column,m=max(row,column);
            long int l=4*(m/4);
            if(m%4==3)
                l+=2;
            n=n-l;
            printf("Case %ld: %ld\n",++i,n);
        }
        else
        {
        long int n=row*column;
        n%2? n=(n+1)/2 : n=n/2;
        printf("Case %ld: %ld\n",++i,n);
        }
    }
    return 0;
}
