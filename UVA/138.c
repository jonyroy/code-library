//Accepted
#include<stdio.h>
#include<math.h>
long long int store[20]={0},p[20]={0};
int main()
{
    long long int n=6,m,i=1,s;
    while(i<=10)
    {
     m=(n*(n+1))/2;
     s=(long long )sqrt((double)m);
     if(s*s==m)
     {
         store[i]=s;
         p[i]=n;
          printf("%10lld%10lld\n",store[i],p[i]);
         i++;
     }
     n++;
    }
    return 0;
}
//******************************************
/*
#include<stdio.h>
#include<math.h>
int main()
{

    long int house[15]={6,35,204,1189,6930,40391,235416,1372105,7997214,46611179};
    long int street[15]={8,49,288,1681,9800,57121,332928,1940449,11309768,65918161};
    int i;
    for(i=0;i<10;i++)
    printf("%10ld%10ld\n",house[i],street[i]);
    return 0;
}*/
