//Operator Overloading */
#include<iostream>
using namespace std;
class coord{
    int x,y;
public:
    coord(){x=0;y=0;}
    coord(int i,int j){x=i;y=j;}
    void display();
    coord operator*(coord ob2);
    coord operator/(coord ob2);
    //void input();
};
/*void coord::input()
{
    cin>>x>>y;
}*/
void coord::display()
{
    cout<<x<<"   "<<y<<"\n";
}
coord coord :: operator*(coord ob2)
{
    coord temp;
    temp.x = x* ob2.x;
    temp.y = y* ob2.y;
    return temp;
}
coord coord :: operator/(coord ob2)
{
    coord temp;
    temp.x = x/ob2.x;
    temp.y = y/ob2.y;
    return temp;
}
int main()
{
    coord o1(10,10), o2(5,3), o3;
    int x,y;
    //o1.input();
    //o2.input();
    o3 = o1*o2;
    o3.display();
    o3 = o1/o2;
    o3.display();
    return 0;
}
