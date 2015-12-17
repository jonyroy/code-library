#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
float radius ;
int com , seg , n , x , y ;

while(scanf("%d" , &n)!=EOF) {
com = 0;
seg = 0;

radius = (float)(2*n-1)/2;

if (n==0)
seg = 0;
else
seg = (2*n-1)*4;

for (x=0 ; (x+1)<radius ; x++) {
y = (int)sqrt(radius * radius - (x+1) * (x+1));
com = com + y;

}

com = 4 * com;

printf("In the case n = %d, %d cells contain segments of the circle.\n" , n , seg);

printf("There are %d cells completely contained in the circle.\n\n" , com);

}
return 0;
}
