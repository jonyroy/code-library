//Wally World
#include<bits/stdc++.h>
using namespace std;
class Wally
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
public:
    bool chech_intersection();
    bool input();
    float dist(int,int,int,int);
    float op();
};
bool Wally::input()
{
    cin>>x1>>y1>>x2>>y2;
    if(x1==0&&x2==0&&y1==0&&y2==0)
        return false;
    cin>>x3>>y3>>x4>>y4;
    return true;
}
bool Wally::chech_intersection()
{

    if(y3==y4)
    {
         float y=y3;
         float x=((x1-x2)*(y3-y1))/(y1-y2)+x1;
         if(y>min(y1,y2)&&y<max(y1,y2)&&x>min(x3,x4)&&x<max(x3,x4))
         return true;
         return false;
    }
    else
    {
         float x=x3;
         float y=((y1-y2)*(x3-x1))/(x1-x2)+y1;
         if(x>min(x1,x2)&&x<max(x1,x2)&&y>min(y3,y4)&&y<max(y3,y4))
         return true;
         return false;
    }
    return false;
}
float Wally::dist(int a,int b,int c,int d)
{
    return sqrt((a-c)*(a-c)+(b-d)*(b-d));
}
float Wally::op()
{
    bool test=chech_intersection();
    if(test)
    {
        float a=dist(x1,y1,x3,y3);
        float b=dist(x1,y1,x4,y4);
        float c=dist(x2,y2,x3,y3);
        float d=dist(x2,y2,x4,y4);
        return min(a+c,b+d)/2.0;
    }
    else
        return dist(x1,y1,x2,y2)/2.0;
}
int main()
{
    Wally a;
    int i=1;
    while(a.input())
    {
       cout<<"Case "<<i<<": "<<setprecision(3)<<fixed<<a.op();
       i++;
    }
    return 0;
}
