#include<bits/stdc++.h>
using namespace std;
long A[100005];
int Binnary_search(long value,int left,int right)
{
    if(right<left) return right;
   int mid=floor((left+right)/2);
    if(A[mid]==value)
      return mid;
    if(A[mid]>value)
        Binnary_search(value,left,mid-1);
    else
        Binnary_search(value,mid+1,right);

}
int main()
{

    return 0;
}


