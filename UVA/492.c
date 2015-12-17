//Accepted
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#include<stdlib.h>
#include<math.h>
#include<ctype.h>
#define MAX 1000000
char line[MAX],re[MAX],store[MAX],a[MAX];
int isvowel(char a)
{
    if(a=='A'||a=='a'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
    return 1;
    else
    return 0;
}
int vowel_en(char *a,char *b)
{
    long int len;
    len=strlen(a);
    a[len]='a';
    a[len+1]='y';
    a[len+2]='\0';
    strcpy(b,a);
    return 0;
}
int consonant(char *a,char *b)
{
    long int len,i;
    len=strlen(a);
    for(i=0;i<len-1;i++)
    b[i]=a[i+1];
    b[len-1]=a[0];
    b[len]='a';
    b[len+1]='y';
    b[len+2]='\0';
    return 0;
}
int m_m(char* line)
{
      long int i,len,j;
      bool test;
      len=strlen(line);
      i=0;
      while(i<len)
      {
       j=0;
       test=false;
        while(isalpha(line[i]))
        {
         re[j++]=line[i];
         test=true;
         i++;
        }
        if(test==true)
        {
        re[j]='\0';
        if(isvowel(re[0]))
        {
        vowel_en(re,store);
        printf("%s",store);
        }
        else
        {
        consonant(re,store);
        printf("%s",store);
        }
        }
        if(i<len)
        printf("%c",line[i]);
        i++;
    }
     printf("\n");
    return 0;
}
int main()
{
    long int i=0,len,count,v,j,k;
    char ch;
    bool test;
    while((ch=getchar())!=EOF)
    {
        if(ch!='\n')
        {
            a[i++]=ch;
        }
        else
        {
            a[i]='\0';
            m_m(a);
            i=0;
        }
    }
    return 0;
}
