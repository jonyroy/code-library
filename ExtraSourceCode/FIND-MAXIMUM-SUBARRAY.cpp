#include<stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
struct node
{
    int low;
    int high;
    int sum;
};
node FindMaxCrossingSubArray(int A[],int low,int mid,int high)
{
    int left_sum=-100000;
    int sum=0,i,max_left=0;
    for(i=mid;i>=low;i--)
    {
        sum=sum+A[i];
        if(sum>left_sum)
        {
            left_sum=sum;
            max_left=i;
        }
    }
    int right_sum=-100000;
    int j,max_right=0;
    sum=0;
    for(j=mid+1;j<=high;j++)
    {
        sum=sum+A[j];
        if(sum>right_sum)
        {
            right_sum=sum;
            max_right=j;
        }
    }
    node max={max_left,max_right,left_sum+right_sum};
    return max;
}
node FindMaximumSubArray(int A[],int low,int high)
{
    if(high==low)
    {
        node x={low,high,A[low]};
        return x;
    }
    else
    {
        node left,right,cross;
       int mid=(low+high)/2;
        left=FindMaximumSubArray(A,low,mid);
        right=FindMaximumSubArray(A,mid+1,high);
        cross=FindMaxCrossingSubArray(A,low,mid,high);
        //cout<<low<<" "<<high<<" "<<cross.sum<<endl;
        if(left.sum>=right.sum&&left.sum>=cross.sum)
        return left;
        else if(right.sum>=left.sum&&right.sum>=cross.sum)
        return right;
        else
        return cross;
    }
}
int main()
{
    int i,j,n,key;
    int A[500];
    n=5;
    for(j=0;j<n;j++)
    scanf("%d",&A[j]);
    node Result=FindMaximumSubArray(A,0,n-1);
    cout<<Result.low<<" "<<Result.high<<" "<<Result.sum<<endl;
    return 0;
}
