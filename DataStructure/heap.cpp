#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int A[1000],length;
int max_heap(int B[],int i)
{
    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=length&&B[l]>B[i])
    largest=l;
    else
    largest=i;
    if(r<=length&&B[r]>B[largest])
    largest=r;
    if(largest!=i)
    {
    swap(B[i],B[largest]);
    max_heap(B,largest);
    }
    return 0;
}
int build_max_heap(int C[])
{
    int i;
    for(i=length/2;i>=1;i--)
    max_heap(C,i);
    return 0;
}
int heap_sort(int D[])
{
    int i;
    build_max_heap(D);
    for(i=length;i>=2;i--)
    {
        swap(D[1],D[i]);
        length--;
        max_heap(D,1);
    }
    return 0;
}
int main()
{
    int i,l;
    scanf("%d",&length);
    l=length;
    for(i=1;i<=length;i++)
    scanf("%d",&A[i]);
    heap_sort(A);
    for(i=1;i<=l;i++)
    printf("%d ",A[i]);
    return 0;
}
