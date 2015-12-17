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
int start=9,Avail=10;
int Print(int V[ ],int L[ ],int start)
{
    if(start==0)
    return 0;
    cout<<V[start]<<endl;
    start=L[start];
    Print(V,L,start);
    return 0;
}
int Insert_first(int V[ ],int L[ ],int Item)
{
    if(Avail==0)
    {
        cout<<"Overflow"<<endl;
        return 1;
    }
    int New=Avail;
    Avail=L[Avail];
    V[New]=Item;
    L[New]=start;
    start=New;
    return 0;
}
int main()
{
    int V[ ]={0,0,74,0,82,84,78,74,100,75,0,88,62,74,93,0,0};
    int L[ ]={0,16,14,1,0,12,0,8,13,5,3,2,7,6,4,0,15};
    int Item,n=0;
    while(1)
    {
    cin>>Item;
    n=Insert_first(V,L,Item);
    if(n==1)
    break;
    }
    cout<<"The information of link list:"<<endl;
    Print(V,L,start);
    return 0;
}
