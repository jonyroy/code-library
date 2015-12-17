    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    int main()
    {
    char text[100],number[100];
    int i,j=1,p,len,T;
    T=atoi(gets(number));
    while(1)
    {
    if(T==0)
    break;
    gets(text);
    p=0;
    len=strlen(text);
    for(i=0;i<len;i++)
    {
    if(text[i]==' '||text[i]=='a'||text[i]=='d'||text[i]=='g'||text[i]=='j'||text[i]=='m'||
    text[i]=='p'||text[i]=='t'||text[i]=='w')
    p++;
    else if(text[i]=='b'||text[i]=='e'||text[i]=='h'||text[i]=='k'||text[i]=='n'||text[i]=='q'||
    text[i]=='u'||text[i]=='x')
    p+=2;
    else if(text[i]=='c'||text[i]=='f'||text[i]=='i'||text[i]=='l'||text[i]=='o'||text[i]=='r'||text[i]=='v'||text[i]=='y')
    p+=3;
    else if(text[i]=='s'||text[i]=='z')
    p+=4;
    }
    printf("Case #%d: %d\n",j,p);
    j++;
    T--;
    }
    return 0;
    }
