#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Wally
{
    int a1,b1,a2,b2;
    int x1,y1,x2,y2;
    float result;
public:
    void getdata(int a,int b,int c,int d)
    {
        a1=a;b1=b;
        a2=c;b2=d;
        cin>>x1>>y1>>x2>>y2;
    }
    void process()
    {
        if(x1==x2)
        {
            float Y;
            Y=((float)(x1-a1)/(float)(a1-a2))*(b1-b2)+b1;
            if(x1>min(a1,a2)&&x1<max(a1,a2))
            {
            if(Y>min(y1,y2)&&Y<max(y1,y2))
            {
                float a,b;
                a=((float)sqrt((a1-x1)*(a1-x1)+(b1-y1)*(b1-y1))+(float)sqrt((a2-x1)*(a2-x1)+(b2-y1)*(b2-y1)))/2.0;
                b=((float)sqrt((a1-x2)*(a1-x2)+(b1-y2)*(b1-y2))+(float)sqrt((a2-x2)*(a2-x2)+(b2-y2)*(b2-y2)))/2.0;
                result=min(a,b);
            }
            else
            result=(float)sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2))/2.0;
            }
            else
            result=(float)sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2))/2.0;
        }
         else
        {
            float X;
            X=((float)(y1-b1)/(float)(b1-b2))*(a1-a2)+a1;
            if(y1>min(b1,b2)&&y1<max(b1,b2))
            {
            if(X>min(x1,x2)&&X<max(x1,x2))
            {
                float a,b;
                a=((float)sqrt((a1-x1)*(a1-x1)+(b1-y1)*(b1-y1))+(float)sqrt((a2-x1)*(a2-x1)+(b2-y1)*(b2-y1)))/2.0;
                b=((float)sqrt((a1-x2)*(a1-x2)+(b1-y2)*(b1-y2))+(float)sqrt((a2-x2)*(a2-x2)+(b2-y2)*(b2-y2)))/2.0;
                result=min(a,b);
            }
            else
            result=(float)sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2))/2.0;
            }
            else
            result=(float)sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2))/2.0;
        }
    }
    void display()
    {
        cout.precision(3);
        cout.setf(ios::fixed, ios::floatfield);
        cout<<result<<endl;
    }
};
int main()
{
    int a,b,c,d;
    Wally w;
    while(cin>>a>>b>>c>>d)
    {
        if(!a&&!b&&!c&&!d)
        break;
        w.getdata(a,b,c,d);
        w.process();
        w.display();
    }
    return 0;
}
