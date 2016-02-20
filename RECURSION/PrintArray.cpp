#include<bits/stdc++.h>
using namespace std;
int PrintArray(int arr[],int cnt,int index,int knt)
{
    if(cnt==index+1)
    return 0;
    cout<<arr[cnt]<<" "<<arr[knt-(cnt-1)]<<endl;
    PrintArray(arr,cnt+1,index,knt);
}
int main()
{
    int a[100],n,cnt;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    if(n%2)
    cnt=n/2+1;
    else
        cnt=n/2;
    PrintArray(a,1,cnt,n);
    return 0;
}
