#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cctype>
#include<iostream>
#include<string>
#include<set>
#include<stack>
#include<list>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
using namespace std;
#define M 1330
#define N 1330
int Nloc=0,Ploc=0,avail=2,start=6,Last=12,n=0;
int Left[100]={0,4,5,9,3,8,1,12,11,10,7,0,0};
int Right[100]={0,6,0,4,1,2,0,10,5,3,9,8,7};
char Info[100]={'0','D','0','K','J','0','B','S','0','M','R','0','T'};
int Print(char Info[ ],int Link[ ],int start)
{
    if(start==0)
    return 0;
    cout<<Info[start]<<ends;
    start=Link[start];
    Print(Info,Link,start);
}
int Findright(char Info[ ],int Link[ ], int L,int Item)
{
    if(L==0)
    {
        return 0;
    }
    Ploc=L;
    while(Info[L]>Item&&L!=0)
    {
        Nloc=L;
        L=Link[L];
        Ploc=L;
        Findright(Info,Link,L,Item);
    }
    return 0;
}
int Findleft(char Info[ ],int Link[ ], int s,int Item)
{
    if(s==0)
    {
        return 0;
    }
    while(Info[s]<Item&&s!=0)
    {
        Ploc=s;
        s=Link[s];
        Nloc=s;
        Findleft(Info,Link,s,Item);
    }
    return 0;
}
int Insert(char Info[ ],int Item)
{
    if(avail==0)
    {
        cout<<"Overflow."<<endl;
        return (n=1);
    }
    Ploc=0;Nloc=0;
    if(Item>=94)
    Findright(Info,Right,Last,Item);
    else
    Findleft(Info,Left,start,Item);
    int New=avail;
    avail=Left[avail];
    Right[avail]=0;
    Info[New]=Item;
    if(Ploc==0)
    {
        Left[New]=start;
        start=New;
        Right[New]=0;
    }
    else if(Nloc==0)
    {
        Left[New]=Left[Ploc];
        Right[New]=Ploc;
        Left[Ploc]=New;
        Last=New;
    }
    else
    {
    Left[New]=Left[Ploc];
    Left[Ploc]=New;
    Right[New]=Ploc;
    Right[Nloc]=New;
    }
    Print(Info,Left,start);
    return 0;
}
int main()
{
    while(1)
    {
    cout<<"\nPlease Enter a character as Item: "<<ends;
    char Item;
    cin>>Item;
    Insert(Info,Item);
    if(n==1)
    break;
    }
    return 0;
}
