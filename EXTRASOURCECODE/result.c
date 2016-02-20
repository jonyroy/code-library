#include<stdio.h>

int main()
{

int term1,term2,Final,att,ct[3],i,j,tem;
int ctav,total,m=1,T;
scanf("%d",&T);

while(T)
{
scanf("%d %d %d %d %d %d %d",&term1,&term2,&Final,&att,&ct[0],&ct[1],&ct[2]);
total=term1+term2+Final+att;

for(i=0;i<3;i++)
for(j=1;j<3-i;j++)
if(ct[j-1]>=ct[j])
{
tem=ct[j-1];
ct[j-1]=ct[j];
ct[j]=tem;
}
total=total+((ct[1]+ct[2])/2);
if(total>=90)
    printf("Case %d: A\n",m);
    else if(total>=80&&total<90)
    printf("Case %d: B\n",m);
    else if(total>=70&&total<80)
    printf("Case %d: C\n",m);
    else if(total>=60&&total<70)
    printf("Case %d: D\n",m);
    else
    printf("Case %d: F\n",m);

 T--;
m++;
}

return 0;
}
