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
int search(char V[ ],int L[ ],int start,char Item,int Loc)
{
    int Ptr=start;
    while(Ptr!=0)
    {
        if(Item==V[Ptr])
        {
            Loc=Ptr;
            break;
        }
        else if(Item>V[Ptr])
        Ptr=L[Ptr];
        else
        break;
    }
    if(Loc==0)
    cout<<"Search is unsuccessful."<<endl;
    else
    cout<<"Search is successful."<<endl;
    return 0;
}
int main()
{
    char V[ ]={'\n','H','J','B','E','A','G','C','F','D','I'};
    int L[ ]={0,10,0,7,8,3,1,9,6,4,2};
    int start=5,Loc=0;
    char Item='H';
    search(V,L,start,Item,Loc);
    return 0;
}
