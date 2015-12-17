#include<stdio.h>
int cycle(long int m)
{
    long int i=1;
    while (m!=1)
    {
        if (m % 2 == 0)
            m = m/2;
        else
            m = 3*m+1;
        i++;
    }
    return i;
}
int main()
{
    long int m,n,max,temp;
    long int mOriginal,nOriginal;
    long int i;
    while(scanf("%ld %ld",&m,&n)!=EOF)
    {
        mOriginal = m;
        nOriginal = n;
        if (m>n)
        {
            temp = m;
            m = n;
            n = temp;
        }
        max = cycle(m);
        for(i=m+1; i<=n; i++)
        {
            temp = cycle(i);
            if (temp > max)
                max = temp;
        }
        printf("%ld %ld %ld\n",mOriginal,nOriginal,max);
    }
    return 0;
}
