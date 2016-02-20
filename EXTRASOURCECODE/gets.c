    #include<stdio.h>
    #include<string.h>
    int main()
    {
    char text[100];
    int c,i,j,p,len;
    while(scanf("%d",&c)==1)
    {
    for(j=0;j<=c;j++)
    {
    gets(text);
    p=0;
    len=strlen(text);
    for(i=0;i<=len;i++)
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
    if(j!=0)
    printf("Case #%d: %d\n",j,p);
    }
    }
    return 0;
    }
