#include<stdio.h>
#include<math.h>
#include<string.h>
 long v[105];
int search(long value,int left,int right)
{
    int mid;
    if(right<left)
    return right;
    mid=floor((left+right)/2);
         if(v[mid]==value)
         return mid;
         if(v[mid]>value)
          search(value,left,mid-1);
        else
          search(value,mid+1,right);

}
struct node
{
   long x,y;
};
node v2[1000];
int searchxy(long x,long y,int left,int right)
{
    int mid;
    if(right<left)
    return right;
    mid=floor((left+right)/2);
         if(v2[mid].x==x&&v2[mid].y==y)
         return mid;
         if(v2[mid].x>x||v2[mid].x==x&&v2[mid].y>y)
          searchxy(x,y,left,mid-1);
        else
          searchxy(x,y,mid+1,right);

}
int main()
{
	 long n,p,q,i;
	 v[0]=1;v[1]=2;
	 for(i=2;i<105;i++)
	 {
	     v[i]=v[i-1]+v[i-2];
	 }

	while(scanf("%d",&n)!=EOF)
	{

	    p=search(n,0,100);

	    printf("%d\n",p);
	}
	return 0;
}
