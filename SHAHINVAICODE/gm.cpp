#include<bits/stdc++.h>
#include<conio.h>
#include<windows.h>
using namespace std;
// #defines
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin();i!=(c).end();i++)
#define sz(x) ((int)(x).size())
#define ms0(x) memset(x,0,sizeof(x))
#define ms1(x) memset(x,-1,sizeof(x))
#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)
#define f first
#define s second
#define mp make_pair
#define pb push_back
#ifdef ONLINE_JUDGE
#define FILEIO(x) freopen(#x ".in","r",stdin);freopen(#x ".out","w",stdout);
#define FILEIOS freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#else
#define FILEIO(x) ;
#define FILEIOS ;
#endif
#define inf 1001001001
typedef pair<int,int> pii;

void gotoxy( int line,int column )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }
  vector<pii> v;
  bool ch[200][200];
  void prnt(int y,int x)
  {
      int i;
   ch[v[0].s][v[0].f]=0;
      for(i=0;i<8;i++)
    {
        gotoxy(v[i].s,v[i].f);
        printf(" ");
        v[i]=v[i+1];
    }
    //getch();
    v[7].s=y;v[7].f=x;
    gotoxy(v[0].s,v[0].f);
    if(v[0].f<v[1].f)
        printf(">");
    else if(v[0].f>v[1].f)
    printf("<");
    else
    printf("^");
    for(i=1;i<7;i++)
    {
        gotoxy(v[i].s,v[i].f);
        printf("0");
    }
    gotoxy(v[7].s,v[7].f);
    if(v[6].f<v[7].f)
        printf(">");
    else if(v[6].f>v[7].f)
    printf("<");
    else
    printf("^");
  }
int main()
{
int i,j,x=8,y=0,m;

for(i=0;i<8;i++)
{
    v.push_back(mp(i,0));
    ch[0][i]=1;
}
prnt(y,x);
while(1)
{
    m=getch();

    if(m==75)
    {
        if(ch[y][x-1]==0&&x>0)
        {
           x--;
           prnt(y,x);
           ch[y][x]=1;
        }
    }
    else if(m==77)
    {
        if(ch[y][x+1]==0&&x<50)
        {
           x++;
           prnt(y,x);
           ch[y][x]=1;
        }
    }
    else if(m==72)
    {
        if(ch[y-1][x]==0&&y>0)
        {
           y--;
           prnt(y,x);
           ch[y][x]=1;
        }
    }
    else if(m==80)
    {
       if(ch[y+1][x]==0&&y<20)
        {
           y++;
           prnt(y,x);
           ch[y][x]=1;
        }
    }

}


 return 0;
}
