#include<bits/stdc++.h>
using namespace std;
const long inf=2000000000;
long n,Sequence[10050],I[10050],L[10050],LL[10050],Seq[10050];
int takeInput(long m)
{
    for(int i=0;i<m;i++)
        {
         scanf("%d",&Sequence[i]);
         Seq[m-i-1]=Sequence[i];
        }
    return 0;
}
long LisNlogk()
{
    int i;
    I[0]=-inf;
    for(int j=1;j<=n;j++)
        I[j]=inf;
        long LisLength=0;
        for(i=0;i<n;i++)
        {
            long low=0,high=LisLength,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(I[mid]<Sequence[i])
                    low=mid+1;
                else
                    high=mid-1;
            }
            I[low]=Sequence[i];
            L[i]=low;
            if(LisLength<low)
                LisLength=low;
        }
    return LisLength;
}
long LisNlogk1()
{
    long i;
    I[0]=-inf;
    for(long j=1;j<=n;j++)
        I[j]=inf;
        long LisLength=0;
        for(i=0;i<n;i++)
        {
            long low=0,high=LisLength,mid;
            while(low<=high)
            {
                mid=(low+high)/2;
                if(I[mid]<Seq[i])
                    low=mid+1;
                else
                    high=mid-1;
            }
            I[low]=Seq[i];
            LL[i]=low;
            if(LisLength<low)
                LisLength=low;
        }
    return LisLength;
}
int  main()
{
    while(scanf("%d",&n)!=EOF)
    {
        long result=-144444;
        takeInput(n);
        long a=LisNlogk();
        long b=LisNlogk1();
        for(long i=0;i<n;i++)
        {
            result=max(result,(L[i]+LL[n-1-i]));
            cout<<L[i]<<" "<<LL[n-1-i]<<endl;
        }
        if(a==1||b==1)
        printf("1\n");
        else
        printf("%d\n",result-1);
    }
    return 0;
}
