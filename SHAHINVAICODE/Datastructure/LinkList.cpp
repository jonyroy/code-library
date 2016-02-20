//DER.......
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<functional>
#include<math.h>
#include<assert.h>
#include<stdarg.h>
#include<time.h>
#include<limits.h>
#include<ctype.h>
#include<string>
#include<map>
#include<set>
#include<queue>
#include<algorithm>
#include<vector>
#include<iostream>
#include<sstream>
using namespace std;

// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define SZ(x) ((int)(x).size())
#define ALL(x) (x).begin(),(x).end()
#define LPI(i,n) for(int i=0;i<(n);i++)
#define LPI1(i,a,b) for(int i=(a);i<=(b);i++)
#define LPIL(i,x) for(int i=0;x[i];i++)
#define LPD(i,n) for(int i=(n)-1;i>=0;i--)
#define LPD1(i,a,b) for(int i=(a);i>=(b);i--)
#define I(x) scanf("%d",&x)
#define RI(x) int x;I(x)
#define II(x,y) scanf("%d%d",&x,&y)
#define RII(x,y) int x,y;II(x,y)
#define III(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define RIII(x,y,z) int x,y,z;III(x,y,z)
#define RS(x) scanf("%s",x)
#define PI(x) printf("%d\n",x)
#define PIS(x) printf("%d ",x)
#define CASET int ___T,cas=1;scanf("%d ",&___T);while(___T--)
#define CASEN0(n) int cas=1;while(scanf("%d",&n)!=EOF&&n)
#define CASEN(n) int cas=1;while(scanf("%d",&n)!=EOF)
#define MP make_pair
#define PB push_back
#define MS0(x) memset(x,0,sizeof(x))
#define MS1(x) memset(x,-1,sizeof(x))
#define SEP(x) ((x)?'\n':' ')
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
#define F first
#define S second
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
typedef pair<int,int> PII;
typedef long long LL;
typedef unsigned long long ULL;
char Info[100];
int Link[100],Start=0,Avail=1;
void Traversing()
{
    int ptr=Start;
    while(ptr!=0)
    {
        printf("%c ",Info[ptr]);
        ptr=Link[ptr];
    }
    printf("\n");
}
int Search_Unsort(char item)//Search for Unsorted data
{
    int ptr=Start;
    while(ptr!=0)
    {
        if(Info[ptr]==item)
        return ptr;//return Location

        ptr=Link[ptr];
    }
    return 0;
}
int Search_Sort(char item)//Search for sorted data
{
    int ptr=Start;
    while(ptr!=0)
    {

        if(Info[ptr]<item)
        ptr=Link[ptr];
        else if(Info[ptr]==item)
        return ptr;//return Location
        else
        return 0;
    }
    return 0;
}
void InsertAtBeginning(char item)
{
    int new_=Avail;
    Avail=Link[Avail];
    Info[new_]=item;
    Link[new_]=Start;
    Start=new_;
}
int FindA(char item)
{
    int ptr=Start,Loc=0;

    while(ptr!=0)
    {
        if(item<Info[ptr])
        return Loc;//return Location
        Loc=ptr;
        ptr=Link[ptr];
    }
    return Loc;
}
void InsLoc(int Loc,char item)
{
    int new_;
    if(Loc==0)
    InsertAtBeginning(item);
    else
    {
        new_=Avail;
        Avail=Link[Avail];
        Info[new_]=item;
        Link[new_]=Link[Loc];
        Link[Loc]=new_;
    }
}
void Insert(char item)
{
    int Loc=FindA(item);
    InsLoc(Loc,item);
}
int FindB(char item)
{
    int ptr=Start,Loc=0;

    while(ptr!=0)
    {
        if(item==Info[ptr])
        return Loc;//return Location
        Loc=ptr;
        ptr=Link[ptr];
    }
    return -1;
}
void StorAvail(int loc)
{
    Link[loc]=Avail;
    Avail=loc;
}
int Delete_(char item)
{
    int Loc,del;
    Loc=FindB(item);
    if(Loc>0)
    {
        del=Link[Loc];
        Link[Loc]=Link[del];
        StorAvail(del);
    }
    else if(Loc==0)
    {
        del=Start;
        Start=Link[Start];
        StorAvail(del);
    }
    else
    printf("Data Not Found\n.");
}

int main()
{
    int i,s;
    char item,ch;
    for(i=1;i<100;i++)
    Link[i]=i+1;
    Link[99]=0;
    while(1)
    {
        printf("For Insert Type 1, Delete Type 2 or Search 3: ");
        scanf("%d%c",&s,&ch);
        if(s==1)
        {
            if(Avail==0)
            printf("Overflow.\n");
            else{
                printf("Type Inserted Data: ");
                scanf("%c",&item);
                Insert(item);
                Traversing();
            }
        }
        else if(s==2)
        {
            if(Start==0)
            printf("Underflow.\n");
            else{
                 printf("Type Deleted Data: ");
                 scanf("%c",&item);
                 Delete_(item);
                 Traversing();
            }
        }
        else if(s==3)
        {
            printf("Type Search Data: ");
            scanf("%c",&item);
            if(Search_Unsort(item)==0)
            printf("Data Not Found.\n");
            else
            printf("Data Found.\n");
        }
        else
        break;

    }
    return 0;
}


