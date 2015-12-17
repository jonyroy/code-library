#include<bits/stdc++.h>
using namespace std;
int main()
{

 map<int,int>a;
 priority_queue<pair<int,int> >q;
 vector<int>knt;
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     int m;
     cin>>m;
     a[m]++;
 }
 map<int,int>:: iterator it;
 for(it=a.begin();it!=a.end();it++)
 {
     q.push(make_pair(it->second,it->first));
 }
 int cnt=0,len=q.size();
 while(1)
 {
     pair<int,int>jony,pony,poky;
     if(len>=3)
     {
       jony=q.top();
       q.pop();
       pony=q.top();
       q.pop();
       poky=q.top();
       q.pop();
       len-=3;
       if(jony.first>0&&pony.first&&poky.first>0)
       {
           knt.push_back(jony.second);
           knt.push_back(pony.second);
           knt.push_back(poky.second);
           cnt++;
           jony.first--;
           pony.first--;
           poky.first--;
           if(jony.first>0){
            q.push(make_pair(jony.first,jony.second));
            len++;
           }
           if(pony.first>0){
            q.push(make_pair(pony.first,pony.second));
            len++;
           }
           if(poky.first>0){
            q.push(make_pair(poky.first,poky.second));
            len++;
           }
       }
     }
     else
        break;
 }
 cout<<cnt<<endl;
 int k=0;
 for(int i=1;i<=cnt;i++)
 {
     int kk[10],l=0;
     for(int j=k;j<=k+2;j++)
     {
         kk[l++]=knt[j];
     }
     sort(kk,kk+3);
     k+=3;
     cout<<kk[2]<<" "<<kk[1]<<" "<<kk[0]<<endl;
 }
 return 0;
}
