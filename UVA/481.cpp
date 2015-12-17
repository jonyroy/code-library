#include<bits/stdc++.h>
using namespace std;
long int inf=20000000;
long int Sequence[1000050],I[1000050],L[1000050],start;
long int LisNlogk(long int n)
{
    I[0]=-inf;
    for(int j=1;j<=n;j++)
        I[j]=inf;
        long int LisLength=0;
        for(int i=0;i<n;i++)
        {
            long int low=0,high=LisLength,mid;
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
            if(LisLength<low){
                LisLength=low;
                start=i;
                }
        }
    return LisLength;
}
int main()
{
   long  int i=-1,n;
    vector<long int>a;
    while(scanf("%ld",&n)!=EOF)
    {
        Sequence[++i]=n;
    }
    long int b=LisNlogk(i);
    printf("%ld\n-\n",b);
    long int c=b;
    long int mm=inf;
    for(int j=start;j>=0;j--)
    {
         if(c==L[j]&&mm>Sequence[j]){
         mm=Sequence[j];
         a.push_back(mm);
         c--;
         }
    }
    for(int i=b-1;i>=0;i--)
    printf("%ld\n",a[i]);
    return 0;
}
