/*

    4
    3 + 1
    2 + 2
    2 + 1 + 1
    1 + 1 + 1 + 1
*/
#include<bits/stdc++.h>
using namespace std;
#define MS1(x) memset(x,-1,sizeof(x))
long mem[1000][1000];
long P( int sum,int large )
{

	if(large==0||sum<0)
	return 0;
	if(sum==0)
	return 1;
	if(mem[sum][large]!=-1)
    return mem[sum][large];

	return mem[sum][large]=P(sum,large-1)+P(sum-large,large);

}
int x[100];
void print_partition(int n)
{
    int i,m,h,r,t;
    for(i=1;i<=n;i++)
     x[i]=1;
     x[1]=n;m=1;h=1;
     cout<<x[1]<<endl;
     while(x[1]!=1)
     {
         if(x[h]==2)
         {
             m++;
             x[h]=1;
             h--;
         }
         else
         {
             r=x[h]-1;
             t=m-h+1;
             x[h]=r;
             while(t>=r)
             {
                 h++;
                 x[h]=r;
                 t=t-r;
             }
             if(t==0)
             m=h;
             else
             {
                 m=h+1;
                 if(t>1)
                 {
                     h++;
                     x[h]=t;
                 }
             }
         }
         for(i=1;i<=m;i++)
         cout<<x[i]<<" ";
         cout<<endl;
     }
}
int main()
{
    int n;
    while(cin>>n)
    {
       // MS1(mem);
        //cout<<P(n,n)<<endl;
        print_partition(n);
    }
    return 0;
}


