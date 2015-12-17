#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string str,s;
        char a[100];
        cin>>s;
        int j=0;
        while(s[j]!='-')
            {
            a[j]=s[j];
            j++;
            }
            a[j]='\0';
           long int b=atol(a);
           j=s.size()-1;
           int k=0;
           while(s[j]!='-')
           {
               a[k++]=s[j--];
           }
           char jj[100];
           for(int l=0;l<k;l++)
            {
              jj[l]=a[k-l+1];
            }
           jj[k]='\0';
           long int c=atol(jj);
           cout<<b<<" "<<c<<endl;
    }
    return 0;
}
