//Interval Tree using Augmenting Red Black Binary Search Tree
#include<bits/stdc++.h>
using namespace std;
#define max_s 1432005
#define inf 10101010
int p[max_s],Left[max_s],Right[max_s],key[max_s][2],color[max_s];
int Red=1,Black=0,nil=0,root=0,Max[max_s],Min[max_s];

int Interval_Search(int x,int low,int high)//find any interval are overlaps
{
    int cnt=0;
    if(low<=key[x][1]&&high>=key[x][0])
    {
        cnt=1;
    }
    if(Left[x]!=nil&&(low<=Max[Left[x]]&&high>=Min[Left[x]]))
    {
       cnt=cnt+ Interval_Search(Left[x],low,high);
    }
    if(Right[x]!=nil&&(low<=Max[Right[x]]&&high>=Min[Right[x]]))
    {
       cnt=cnt+ Interval_Search(Right[x],low,high);
    }
    return cnt;
}

int Search(int low,int high)
{
   int x=root;
    while(key[x][0]!=nil&&!(low==key[x][0]&&high==key[x][0]))
    {
        if(low<=key[x][0])
        x=Left[x];
        else
        x=Right[x];
    }
    return x;
}

int minimum(int x)
{
    while(Left[x]!=nil)//-1 mean null
    {
        x=Left[x];
    }
    return x;
}
int maximum(int x)
{
    while(Right[x]!=nil)
    {
        x=Right[x];
    }
    return x;
}

void left_rotate(int x)
{
    int y=Right[x];
    Right[x]=Left[y];
    if(Left[y]!=nil)
     p[Left[y]]=x;
    p[y]=p[x];
    if(p[x]==nil)
    root=y;
    else if(x==Left[p[x]])
    Left[p[x]]=y;
    else
    Right[p[x]]=y;
    Left[y]=x;
    p[x]=y;

    Max[x]=max(key[x][1],max(Max[Left[x]],Max[Right[x]]));
    Max[y]=max(key[y][1],max(Max[Left[y]],Max[Right[y]]));

    Min[x]=min(key[x][0],min(Min[Left[x]],Min[Right[x]]));
    Min[y]=min(key[y][0],min(Min[Left[y]],Min[Right[y]]));
}
void right_rotate(int y)
{
    int x=Left[y];
    Left[y]=Right[x];
    if(Left[y]!=nil)
    p[Left[y]]=y;
    p[x]=p[y];
    if(p[x]==nil)
    root=x;
    else if(Left[p[y]]==y)
    Left[p[y]]=x;
    else
    Right[p[y]]=x;
    Right[x]=y;
    p[y]=x;

    Max[y]=max(key[y][1],max(Max[Left[y]],Max[Right[y]]));
    Max[x]=max(key[x][1],max(Max[Left[x]],Max[Right[x]]));

    Min[y]=min(key[y][0],min(Min[Left[y]],Min[Right[y]]));
    Min[x]=min(key[x][0],min(Min[Left[x]],Min[Right[x]]));
}
void Insert_fixup(int z)
{
    int y;
    while(color[p[z]]==Red)
    {
        if(p[z]==Left[p[p[z]]])
        {
            y=Right[p[p[z]]];
            if(color[y]==Red)
            {
                color[p[z]]=Black;
                color[y]=Black;
                color[p[p[z]]]=Red;
                z=p[p[z]];
            }
            else
            {
                if(z==Right[p[z]])
                {
                    z=p[z];
                    left_rotate(z);
                }
                color[p[z]]=Black;
                color[p[p[z]]]=Red;
                right_rotate(p[p[z]]);
            }
        }
        else
        {
            y=Left[p[p[z]]];
            if(color[y]==Red)
            {
                color[p[z]]=Black;
                color[y]=Black;
                color[p[p[z]]]=Red;
                z=p[p[z]];
            }
            else
            {
                if(z==Left[p[z]])
                {
                    z=p[z];
                    right_rotate(z);
                }
                color[p[z]]=Black;
                color[p[p[z]]]=Red;
                left_rotate(p[p[z]]);
            }
        }
    }
    color[root]=Black;
}
//z.key=v,z.Left=nill,z.Right=nill;
void insert(int z)
{
   int  y=nil;
   int  x=root;
    while(x!=nil)
    {
        y=x;
        if(key[z][0]<=key[x][0])
        x=Left[x];
        else
        x=Right[x];
    }
    p[z]=y;
    if(y==nil)
    root=z;// tree was empty
    else if(key[z][0]<=key[y][0])
    Left[y]=z;
    else
    Right[y]=z;
    Left[z]=nil;
    Right[z]=nil;
    color[z]=Red;
    Max[z]=nil;
    y=z;
    while(y!=nil)
    {
       Max[y]=max(key[y][1],max(Max[Left[y]],Max[Right[y]]));
       Min[y]=min(key[y][0],min(Min[Left[y]],Min[Right[y]]));
        y=p[y];
    }
    Insert_fixup(z);
}
void transplant(int u,int v)
{
    if(p[u]==nil)
    root=v;
    else if(u==Left[p[u]])
    Left[p[u]]=v;
    else
    Right[p[u]]=v;
    p[v]=p[u];
}
void Delete_fixup(int x)
{
    int w;
    while(x!=root&&color[x]==Black)
    {
        if(x==Left[p[x]])
        {
            w=Right[p[x]];
            if(color[w]==Red)
            {
                color[w]=Black;
                color[p[x]]=Red;
                left_rotate(p[x]);
                w=Right[p[x]];
            }
            if(color[Left[w]]==Black&&color[Right[w]]==Black)
            {
                color[w]=Red;
                x=p[x];
            }
            else
            {
                if(color[Right[w]]==Black)
                {
                    color[Left[w]]=Black;
                    color[w]=Red;
                    right_rotate(w);
                    w=Right[p[x]];
                }
                color[w]=color[p[x]];
                color[p[x]]=Black;
                color[Right[w]]=Black;
                left_rotate(p[x]);
                x=root;
            }
        }
        else
        {
            w=Left[p[x]];
            if(color[w]==Red)
            {
                color[w]=Black;
                color[p[x]]=Red;
                right_rotate(p[x]);
                w=Left[p[x]];
            }
            if(color[Right[w]]==Black&&color[Left[w]]==Black)
            {
                color[w]=Red;
                x=p[x];
            }
            else
            {
                if(color[Left[w]]==Black)
                {
                    color[Right[w]]=Black;
                    color[w]=Red;
                    left_rotate(w);
                    w=Left[p[x]];
                }
                color[w]=color[p[x]];
                color[p[x]]=Black;
                color[Left[w]]=Black;
                right_rotate(p[x]);
                x=root;
            }
        }
    }
    color[x]=Black;
}
void deleted(int z)
{
    int y=z,x,r;
    int ycolor=color[y];
    if(Left[z]==nil)
    {
        x=Right[z];
        r=p[z];
        transplant(z,Right[z]);
    }
    else if(Right[z]==nil)
    {
        x=Left[z];
        r=p[z];
        transplant(z,Left[z]);
    }
    else
    {
       int y=minimum(Right[z]);
       ycolor=color[y];
       x=Right[y];
        if(p[y]==z)
        {
            p[x]=y;
            r=y;
        }
        else
        {
            r=p[y];
            transplant(y,Right[y]);
            Right[y]=Right[z];
            p[Right[y]]=y;
        }
        transplant(z,y);
        Left[y]=Left[z];
        p[Left[y]]=y;
        color[y]=color[z];
    }
    y=r;
    while(y!=nil)
    {
        Max[y]=max(key[y][1],max(Max[Left[y]],Max[Right[y]]));
        Min[y]=min(key[y][0],min(Min[Left[y]],Min[Right[y]]));
        y=p[y];
    }
    if(ycolor==Black)
    Delete_fixup(x);

}

void print(int x)
{
    if(x!=nil)
    {

        print(Left[x]);
        printf("%d ",key[x][0]);
        print(Right[x]);
    }
}
int main(){

    int i,n,low,high;
    Min[0]=inf;
    cout<<"Number of Interval: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>key[i][0]>>key[i][1];
        insert(i);
    }
    while(1)
    {
        cout<<"Enter the value of low and high for search:";
        cin>>low>>high;
        cout<<Interval_Search(root,low,high)<<" Overlaps"<<endl;
    }

    return 0;
}


