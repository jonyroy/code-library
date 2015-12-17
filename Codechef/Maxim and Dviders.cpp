#include<bits/stdc++.h>
using namespace std;
int main()
{

    long int a[200];
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=0,cou=0;
        long value;
        cin>>value;
        long int m=sqrt(value);
        for(int j=1;j<=m;j++)
        {
            if(value%j==0)
            {
                a[++k]=j;
                if(j==(value/j))
                    ;
                else
                a[++k]=value/j;
            }
        }
        for(int j=1;j<=k;j++)
        {
            long b=a[j];
           while(b)
           {
               int mm=b%10;
               if(mm==4||mm==7)
                {
                cou++;
                break;
                }
                b=b/10;
           }
        }
        cout<<cou<<endl;
    }
    return 0;
}
