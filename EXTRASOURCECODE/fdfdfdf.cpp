    #include <stdio.h>
    #include<string.h>
    main()
    {
    int number;
    int ch;
    char sh[100];
    int i=0,j=0;
    printf("input No in Hex: ");
    scanf("%s",&sh);
    number = 0;
    i =strlen(sh);
    j=0;
    while(i!=0)
    {
    ch = sh[j];
    if(('0' <= ch && ch <= '9'))
    {
    number = number * 16;
    number = number + (ch - '0');
    }
    if(('A' <= ch && ch && ch <= 'Z'))
    {
    number = number * 16;
    number = number + (ch - '7');
    }
    i--;
    j++;
    }
    printf("The O/p No in Decimal is : %d\n",number);
    }
