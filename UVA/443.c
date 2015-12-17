#include<stdio.h>
#include<math.h>
#define MA 5843
long  int store[MA]={1,1,2,3,5,7};
int main()
{
    long int i,j=6,k,n,m[5]={1,2,3,5,7},val=8,o,p;
    while(1)
    {
        p=val;
        while(p%2)
        p/=2;
        while(p%3)
        p/=3;
        while(p%5)
        p/=5;
        while(p%7)
        p/=7;
        if(p==1)
        {
            store[j]=val;
            if(j==5842)
            break;
        j++;
        }
        val++;
    }
    while(scanf("%ld",&k))
    {
        if(k==0)
        break;
        if(k==11||k==12||k==13)
        {
         printf("The %ldth humble number is %ld\n",k,store[k]);
         continue;
        }
        o=k%10;
        if(o==1)
        printf("The %ldst humble number is %ld\n",k,store[k]);
        else if(o==2)
        printf("The %ldnd humble number is %ld\n",k,store[k]);
        else if(o==3)
        printf("The %ldrd humble number is %ld\n",k,store[k]);
        else
        printf("The %ldth humble number is %ld\n",k,store[k]);
    }
    return 0;
}
