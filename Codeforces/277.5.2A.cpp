#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[3005],temp,i,j,T,m;
    scanf("%d",&T);
    vector<pair<int,int> >p;
    for(i=0;i<T;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<T-1;i++)
        {
            bool test=false;
            m=i;
            for(j=i+1;j<T;j++)
            {
               if(a[m]>a[j])
               {
               m=j;
               test=true;
               }
            }
            if(test){
            temp=a[i];
            a[i]=a[m];
            a[m]=temp;
            p.push_back(make_pair(i,m));
            }
        }
        printf("%d\n",p.size());
        for(int i=0;i<p.size();i++)
            cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}

