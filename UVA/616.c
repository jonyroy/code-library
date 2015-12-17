//Accepted
#include<stdio.h>
#include<math.h>
int main()
{
    long int coconut,man,i,count,m,check;
    while(scanf("%ld",&coconut))
    {
        check=0;
        if(coconut<0)
        break;
        for(i=5;i>1;i--)
        {
            count=0;
            m=coconut;
            while(m%i==1)
            {
                man=(m)/i+1;
                m=m-man;
                count++;
                if(count==i)
                break;
            }
            if(i==count&&m%i==0)
            {
            printf("%ld coconuts, %ld people and 1 monkey\n",coconut,i);
            break;
            }
        }
        if(i<=1)
        printf("%ld coconuts, no solution\n",coconut);
    }
    return 0;
}
