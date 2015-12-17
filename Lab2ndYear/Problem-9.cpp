//Problem#4
#include<bits/stdc++.h>
using namespace std;
class ABC
{
    string a,b,c;
public:
    int call(string,int,int,int);
    void prnt(string,int,int,int);
    void input();
    void operation();
};
void ABC::input()
{
    cin>>a>>b>>c;
}
int ABC::call(string a,int i,int j,int k)
{
        int l,d;
        l=0;
        for(d=0;d<5;d++)
        {
        if(a[d]=='A')
        l=l*10+i;
        else if(a[d]=='B')
        l=l*10+j;
        else if(a[d]=='C')
        l=l*10+k;
        else
        l=l*10+a[d]-48;
        }
        return l;
}
void ABC::prnt(string a,int i,int j,int k)
{
        int l,d;
        l=0;
        cout<<" ";
        for(d=0;d<5;d++)
        if(a[d]=='A')
        cout<<i;
        else if(a[d]=='B')
        cout<<j;
        else if(a[d]=='C')
        cout<<k;
        else
        cout<<a[d];
        cout<<endl;
}
void ABC::operation()
{
     for(int i=0;i<=9;i++)
         {
           for(int j=0;j<=9;j++)
            {
              for(int k=0;k<=9;k++)
               {
                if(call(c,i,j,k)==call(a,i,j,k)+call(b,i,j,k))
                {
                  prnt(a,i,j,k);
                  prnt(b,i,j,k);
                  cout<<"------\n";
                  prnt(c,i,j,k);
                }
               }
            }
           }
}
int main()
{
      ABC x;
      x.input();
      x.operation();
    return 0;
}
