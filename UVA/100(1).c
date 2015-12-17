#include <stdio.h>
unsigned long findMaxCycleLength(unsigned long min, unsigned long max);
unsigned long findCycleLength(unsigned long n);
int main(int argc, char** argv)
{
unsigned long min, max, num = 0;
while(scanf("%li %li", &min, &max) != EOF)
        {
                printf("%li %li ", min, max);
                if(min > max)
                {
                        min^=max;
                        max^=min;
                        min^=max;
                }
                num = findMaxCycleLength(min, max);
                printf("%li\n", num);
        }
}
unsigned long findMaxCycleLength(unsigned long min, unsigned long max)
{
        unsigned long temp,i;
        unsigned long n = findCycleLength(max);
        for(i = min; i < max; i++)
        {
                temp = findCycleLength(i);
                if(temp > n)
                {
                        n = temp;
                }
        }
        return n;
}
unsigned long findCycleLength(unsigned long n)
{
        if(n == 0) return 0;
        unsigned long count = 1;
        while(n != 1)
        {
                if(n%2 == 1)
                {
                        n = 3*n+1;
                }
                else
                {
                        n = n/2;
                }
                count++;
        }
        return count;
}
