        Kadane’s Algorithm:
    Largest Sum Contiguous Subarray:
int maxSum(int *A,int lo,int hi)
{
        int left=lo,right=lo,sum=INT_MIN;
        int currentMaxSum=0;
        int maxLeft=lo,maxRight=lo;
        for(int i=lo;i<=hi;i++)
            {
            currentMaxSum+=A[i];
            if(currentMaxSum>sum)
            {
                sum=currentMaxSum;
                right=i;
                maxLeft=left;
                maxRight=right;
            }
            if(currentMaxSum<0)
            {
                left=i+1;
                right=left;
                currentMaxSum=0;
            }
            }
        printf("Maximum sum:");
        for(int i = maxLeft; i <= maxRight; i++)
            printf(" %d", A[i]);
        printf("\n");
        return sum;
    }
