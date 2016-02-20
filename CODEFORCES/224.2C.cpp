#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a[100005];
    map<int,int>m,nm;
    map<int,int>::iterator it;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        nm[a[i]]++;
    }
    sort(a,a+n);
    if(n==1)
    {
        cout<<"-1";
        return 0;
    }
    if(nm.size()==1)
    {
        cout<<1<<endl<<a[0];
        return 0;
    }
    int b=a[1]-a[0];
    int c=(-1)*(b-a[0]);
    if(n==2)
    {
        if(b==0)
            cout<<0;
        else if(b%2==0)
            cout<<3<<endl<<c<<" "<<(a[0]+a[1])/2<<" "<<a[1]+b;
        else
            cout<<2<<endl<<c<<" "<<a[1]+b;
        return 0;
    }
    for(int i=1;i<n;i++)
        m[a[i]-a[i-1]]++;
    if(m.size()==1)
        cout<<2<<endl<<c<<" "<<a[n-1]+b;
    else if(m.size()>2)
        cout<<0;
    else
       {
           it=m.begin();
           int ritu=it->second;
           int rit=it->first;
           it++;
           int cnt=it->second;
           int cn=it->first;
           if(cnt==1&&ritu==1)
           {
               if((cn%2==0)&&(cn/2)==rit)
               {
                   cout<<1<<endl;
                   for(int i=1;i<n;i++)
                   {
                      if((a[i]-a[i-1])==cn)
                      {
                         cout<<(a[i]+a[i-1])/2;
                         return 0;
                      }
                   }
                }
               else if((rit%2==0)&&(rit/2)==cn)
                {
                    cout<<1<<endl;
                   for(int i=1;i<n;i++)
                   {
                      if(a[i]-a[i-1]==rit)
                      {
                         cout<<(a[i]+a[i-1])/2;
                         return 0;
                      }
                   }
                }
                cout<<0;
                return 0;
           }
           else if(cnt==1&&ritu>1)
           {
              if((cn%2==0)&&(cn/2)==rit)
               {
                   cout<<1<<endl;
                   for(int i=1;i<n;i++)
                   {
                      if(a[i]-a[i-1]==cn)
                      {
                         cout<<(a[i]+a[i-1])/2;
                         return 0;
                      }
                   }
                }
                else
                {
                    cout<<0;
                    return 0;
                }
           }
          else if(ritu==1&&cnt>1)
           {
                 if((rit%2==0)&&(rit/2)==cn)
                {
                    cout<<1<<endl;
                   for(int i=1;i<n;i++)
                   {
                      if(a[i]-a[i-1]==rit)
                      {
                         cout<<(a[i]+a[i-1])/2;
                         return 0;
                      }
                   }
                }
                else
                {
                cout<<0;
                return 0;
                }
           }
           else
           {
               cout<<0;
               return 0;
           }
       }

    return 0;
}
