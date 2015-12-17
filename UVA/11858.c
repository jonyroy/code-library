#include<stdio.h>
#include<math.h>
#define MAX 1000200
long int count=0;
long int A[1000200],L[MAX],R[MAX];
int merge(long int A[],long int p,long int q,long int r)
{
    long int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=0;i<n1;i++)
    L[i]=A[p+i];
    for(j=0;j<n2;j++)
    R[j]=A[q+j+1];
    L[i]=999999999+10;
    R[j]=999999999+10;
    i=0;j=0;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
        A[k]=L[i];
        i=i+1;
        }
        else
        {
            A[k]=R[j];
            count+=n1-i;
            j++;
        }
    }
    return 0;
}
int merge_sort(long int A[],long int p,long int r)
{
    long int q;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(A,p,q);
        merge_sort(A,q+1,r);
        merge(A,p,q,r);
    }
    return 0;
}
int main()
{
    long int i,j,n;
    while(scanf("%ld",&n)!=EOF)
    {
    for(i=0;i<n;i++)
    scanf("%ld",&A[i]);
    merge_sort(A,0,n-1);
    printf("%ld\n",count);
    count=0;
    }
    return 0;
}
