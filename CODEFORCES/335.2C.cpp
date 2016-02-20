#include<bits/stdc++.h>
using namespace std;
int inf=2000000000;
int n,Sequence[100005],I[100050],L[100050];
int takeInput(int m)
{
    for(int i=0;i<m;i++)
    scanf("%d",&Sequence[i]);
    return 0;
}
int LisNlogk()
{
    int i,m=0;
    I[0]=-inf;
    for(int j=1;j<=n;j++)
        I[j]=inf;
        int LisLength=0;
        for(i=0;i<n;i++)
        {
            int low=0,high=LisLength,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(I[mid]<Sequence[i])
                    low=mid+1;
                else
                    high=mid-1;
            }
            I[low]=Sequence[i];
            if(LisLength<low)
                LisLength=low;
        }
    return LisLength;
}
int main()
{
        cin>>n;
        takeInput(n);
        int cnt=LisNlogk();
        printf("%d\n",n-cnt);
    return 0;
}

