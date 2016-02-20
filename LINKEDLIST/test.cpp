#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <cassert>
#include <ctime>
using namespace std;
int avail=1,start=0;
int loc,locp;
int find_location(int info[],int link[],int item)
{
    int loc,sta;
    sta=start;
    while(sta)
    {
        if(item==info[sta])
            return sta;
                sta=link[sta];
    }
    loc=0;
    return 0;
}
int insert_item(int info[],int link[],int item,int loc)
{
    if(avail==0)
    {
        cout<<"Overflow\n";
        return 0;
    }
    int save=avail;
    avail=link[save];
    info[save]=item;
    if(loc==0)
    {
        link[save]=start;
        start=save;
    }
else
 {
   link[save]=link[loc];
   link[loc]=save;
 }
    return 0;
}
int traverse(int info[],int link[])
{
   int sta=start;
    while(sta)
    {
        cout<<info[sta]<<" ";
        sta=link[sta];
    }
    cout<<endl;
    return 0;
}
int find_loc(int info[],int link[],int item)
{
    if(start==0)
    {
    loc=0;
    locp=0;
    return 0;
    }
    if(info[start]==item)
    {
        loc=start;
        locp=0;
        return 0;
    }
    int save=start;
    int ptr=link[start];
    while(ptr)
    {
       if(info[ptr]==item)
       {
           loc=ptr;
           locp=save;
           return 0;
       }
       save=ptr;
       ptr=link[ptr];
    }
    loc=0;
    return 0;
}
int delete_item(int info[],int link[])
{
    if(loc==0)
    {
        cout<<"Item Is Not in The List\n";
        return 0;
    }
    if(locp==0)
    {
        start=link[start];
    }
    else
    {
        link[locp]=link[loc];
    }
     link[loc]=avail;
     avail=loc;
    return 0;
}
int main()
{
    int n,item,save;
    int info[201],link[201];
    for(int i=1;i<200;i++)
        link[i]=i+1;
        link[200]=0;
    cout<<"To Stop Entering Value Into Linked List Enter Zero.\n";
    while(scanf("%d",&item)&&item>0)
    {
        save=avail;
        info[avail]=item;
        avail=link[avail];
        link[save]=start;
        start=save;
    }
cout<<"To Traverse Enter 't'\n"<<"To Insert Enter 'i'\n"<<"To Delete Enter 'd'\n";
cout<<"To Exit Enter 'e'\n";
     string s;
     while(cin>>s)
     {
         if(s=="i")
         {
            int b;
            cin>>b;
            int a=find_location(info,link,b);
            int c;
            cin>>c;
            insert_item(info,link,c,a);
         }
         else if(s=="t")
         {
               traverse(info,link);
         }
         else if(s=="d")
        {
            int it;

                cin>>it;
         find_loc(info,link,it);
         delete_item(info,link);
         loc=0;locp=0;
         }
         else if(s=="e")
         break;
         else
            cout<<"You Enter a Wrong Keyword.\n";
     }
    return 0;
}
