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
int Loc=0,avail=2,start=6,Last=12,n=0;
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
    Loc=L;
    while(Info[L]!=Item&&L!=0)
    {
        L=Link[L];
        Loc=L;
        Findright(Info,Link,L,Item);
    }
    if(L==0)
    Loc=0;
    return 0;
}
int Findleft(char Info[ ],int Link[ ], int s,int Item)
{
    if(s==0)
    {
        return 0;
    }
    Loc=s;
    while(Info[s]!=Item&&s!=0)
    {
        s=Link[s];
        Loc=s;
        Findleft(Info,Link,s,Item);
    }
    if(s==0)
    Loc=0;
    return 0;
}
int DELETE(char Info[ ],int Item)
{

    Loc=0;
    if(Item>=94)
    Findright(Info,Right,Last,Item);
    else
    Findleft(Info,Left,start,Item);
    if(Info[start]=='0')
    {
        cout<<"Underflow."<<endl;
        return (n=1);
    }
    if(Loc==0)
    {
        cout<<"No Found."<<endl;
    }
    if(Loc==start)
    {
        start=Left[start];
        Right[start]=0;
        cout<<start<<endl;
    }
    else if(Loc==Last)
    {
        Left[Right[Loc]]=0;
        Last=Right[Loc];
    }
    else
    {
    Left[Right[Loc]]=Left[Loc];
    Right[Left[Loc]]=Right[Loc];
    }
    int New=Loc;
    Left[New]=avail;
    Info[New]='0';
    avail=New;
    return 0;
}
int main()
{
    while(1)
    {
    Print(Info,Left,start);
    cout<<"\nPlease Enter a character as Item: "<<ends;
    char Item;
    cin>>Item;
    DELETE(Info,Item);
    if(n==1)
    break;
    }
    return 0;
}
