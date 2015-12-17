#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;
int A[100000];
struct node
{
    int a,b,c;
};
node find_max_crossing_subarray(int A[],int low,int mid,int high)
{
    int left_sum=-100000000,sum,max_left;
    sum=0;
    for(int i=mid;i>=low;i--)
    {
        sum+=A[i];
        if(sum>left_sum)
        {
            left_sum=sum;
            max_left=i;
        }
    }
    sum=0;
    int right_sum=-100000000,max_right;
    for(int i=mid+1;i<=high;i++)
    {
        sum+=A[i];
        if(sum>right_sum)
        {
            right_sum=sum;
            max_right=i;
        }
    }
    node x;
    x.a=max_left;
    x.b=max_right;
    x.c=left_sum+right_sum;
    return x;
}
node find_max_subarray(int A[],int low,int high)
{
    int mid;
    if(low==high)
        {
            node x;
            x.a=low,x.b=high,x.c=A[low];
        return(x);
        }
        else
        {
            mid=(low+high)/2;
            node left=find_max_subarray(A,low,mid);
            node right=find_max_subarray(A,mid+1,high);
            node cross=find_max_crossing_subarray(A,low,mid,high);
            if(left.c>=right.c&&left.c>=cross.c)
                return left;
            else if(right.c>=left.c&&right.c>=cross.c)
                return right;
            else
                return cross;
        }
}
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>A[i];
        node max_sum=find_max_subarray(A,1,n);
        cout<<max_sum.a<<" "<<max_sum.b<<" "<<max_sum.c<<endl;
    return 0;
}
