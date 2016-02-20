#include <stdio.h>
#include <stdlib.h>
void main()
{
float *ptr = malloc( sizeof(*ptr) );
int i;
for(i=0;i<5;i++)
{
    scanf("%f",(ptr+i));
    printf("%f",*(ptr+i));
}

}
