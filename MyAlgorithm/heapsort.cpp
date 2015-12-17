#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int A[1000],length;
int max_heap(int A[],int i)
{
    int l,r,largest;
    l=2*i;
    r=2*i+1;
    if(l<=length&&A[l]>A[i])
    largest=l;
    else
    largest=i;
    if(r<=length&&A[r]>A[largest])
    largest=r;
    if(largest!=i)
    {
    swap(A[i],A[largest]);
    max_heap(A,largest);
    }
    return 0;
}
int build_max_heap(int A[])
{
    int i;
    for(i=length/2;i>=1;i--)
    max_heap(A,i);
    return 0;
}
int heap_sort(int A[])
{
    int i;
    build_max_heap(A);
    for(i=length;i>=2;i--)
    {
        swap(A[1],A[i]);
        length--;
        max_heap(A,1);
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
