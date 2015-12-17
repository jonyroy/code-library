//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{

    char N[200],m[200];
    int i,j,len,D;
    bool test;
    while(scanf("%d%s",&D,N))
    {
        if(D==0&&N[0]=='0')
        break;
        len=strlen(N);
        j=0;
        test=false;
        for(i=0;i<len;i++)
        {
            if(D!=(N[i]-48))
            {
                m[j++]=N[i];
            }
            if(j==0)
            {
                while(N[i+1]=='0'&&(i+1)<len)
                i++;
                if(i==len-1)
                test=true;
            }
            if(test==true)
            break;
        }
        m[j]='\0';
        if(j==0)
        printf("0\n");
        else if(test==true)
        printf("0\n");
        else
        printf("%s\n",m);
    }
    return 0;
}
