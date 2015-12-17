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
int start=9,Avail=10,Loc,Locp,n=0;
int Findb(int V[ ],int L[ ],int Item)
{
    if(start==0)
    {
        Loc=0;Locp=0;
        return 0;
    }
    if(V[start]==Item)
    {
        Loc=start;
        Locp=0;
        return 0;
    }
    int save=start;
    int ptr=L[start];
    while(ptr!=0)
    {
        if(V[ptr]==Item)
        {
            Loc=ptr;
            Locp=save;
            return 0;
        }
        save=ptr;
        ptr=L[ptr];
    }
    Loc=0;
    return 0;
}
int DELETE (int V[ ],int L[ ],int Item)
{
    if(start==0)
    {
    cout<<"Underflow"<<endl;
    return (n=1);
    }
    Findb(V,L,Item);
    if(Locp==0)
    start=L[start];
    else
    L[Locp]=L[Loc];
    L[Loc]=Avail;
    Avail=Loc;
    return 0;
}
int Print(int V[ ],int L[ ],int start)
{
    if(start==0)
    return 0;
    cout<<V[start]<<ends;
    start=L[start];
    Print(V,L,start);
    return 0;
}
int main()
{
    int V[ ]={0,0,74,0,82,84,78,74,100,75,0,88,62,74,93,0,0};
    int L[ ]={0,16,14,1,0,12,0,8,13,5,3,2,7,6,4,0,15};
    int Item;
    Print(V,L,start);
    cout<<"\nWhich Item do U delete,Enter this Item: ";
    while(1)
    {
    cin>>Item;
    DELETE(V,L,Item);
    if(n==1)
    break;
    Print(V,L,start);
    cout<<"\nWhich Item do U delete,Enter this Item: ";
    }
    return 0;
}
