#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    char a,b[5],c[5];
    int len,map[100];
    map['6']=6;
    map['7']=7;
    map['8']=8;
    map['9']=9;
    map['T']=10;
    map['J']=11;
    map['Q']=12;
    map['K']=13;
    map['A']=14;
    scanf("%c%s%s",&a,b,c);
     if(b[1]==c[1])
     {
        if(map[b[0]]>map[c[0]])
        printf("YES\n");
        else
        printf("NO\n");
     }
     else if(a==b[1])
     printf("YES\n");
     else
     printf("NO\n");
    return 0;
}
