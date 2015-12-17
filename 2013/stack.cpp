#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;
int top=0,maxstk=1000;
int push_b(int A[],int item)
{
    if(top==maxstk)
        {
        cout<<"OverFlow"<<endl;
        return 0;
        }
        top=top+1;
        A[top]=item;
    return 0;
}
int pop(int A[])
{
    int item;
    if(top==0)
    {
        cout<<"UnderFlow"<<endl;
        return 0;
    }
    item=A[top];
    cout<<"Poped: "<<item<<endl;
    top=top-1;
    return item;
}
int main()
{
    int item,n,A[1000];
    cout<<"To Push On Stack Press 1.\n";
    cout<<"To Pop Up From Stack Press 2.\n";
    cout<<"To See The Stack Element Press Any Key.\n";
    while(cin>>n)
    {
        if(n==1)
            {
                cout<<"Push:";
                cin>>item;
            push_b(A,item);
            }
            else if(n==2)
                pop(A);
            else
            {
            for(int i=1;i<=top;i++)
            cout<<A[i]<<" ";
            cout<<endl;
            }
    }
    return 0;
}
