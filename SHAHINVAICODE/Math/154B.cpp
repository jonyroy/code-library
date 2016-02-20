#include<bits/stdc++.h>
using namespace std;
 int A[2][100005];
 int v[100005],sz;
 int factor(int n,int flg)
 {
       int i;sz=0;
       for(i=2;i<=(int)sqrt(n);i++)
       {
         if(n%i==0)
         {
             if(A[0][i]>0&&flg==0)
             return A[0][i];
             v[sz++]=i;
         while(n%i==0)
         {
           //printf("%d ",i);
           n/=i;
         }
         }
       }
       if (n > 1)
        {
            if(A[0][n]>0&&flg==0)
             return A[0][n];
            v[sz++]=n;
        }
      return 0;
 }

int main()
{
  int n,m,j,i,x;
  char ch;
  cin>>n>>m;
  for(i=0;i<m;i++)
  {
      cin>>ch>>n;
      if(ch=='+')
      {
         if(A[1][n]==1)
         cout<<"Already on"<<endl;
         else
         {
             x=factor(n,0);
             if(x>=1)
             {
                cout<<"Conflict with "<<x<<endl;
             }
             else
             {
                 cout<<"Success"<<endl;
                 A[1][n]=1;
                 for(j=0;j<sz;j++)
                 A[0][v[j]]=n;
             }
         }
      }
      else
      {
        if(A[1][n]==0)
         cout<<"Already off"<<endl;
         else
         {
             x=factor(n,1);
            cout<<"Success"<<endl;
            A[1][n]=0;
            for(j=0;j<sz;j++)
              A[0][v[j]]=0;
         }
      }

  }
  return 0;
}
