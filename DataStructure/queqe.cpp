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
int N=1000,Front=0,rear=0,B[1000],j=1;
int queue_insert(int A[],int item)
{
    if((Front==1&&rear==N)||(Front==rear+1))
    {
        cout<<"OverFlow"<<endl;
        return 0;
    }
    if(Front==0)
    {
        Front=1;
        rear=1;
    }
    else if(rear==N)
        rear=1;
    else
        rear=rear+1;
    A[rear]=item;
    return 0;
}
int queue_delete(int A[])
{
    int item;
    if(Front==0)
        {
        cout<<"UnderFlow\n";
        }
        B[j++]=A[Front];
        if(Front==rear)
            {
            Front=0;
            rear=0;
            }
            else if(Front==N)
                Front=1;
            else
                Front=Front+1;
    return 0;
}
int main()
{
    int A[1000],item;
    string str;
    while(cin>>str)
    {
        if(str=="push")
            {
                cin>>item;
            queue_insert(A,item);
            }
        else if(str=="pop")
            {
            queue_delete(A);
            }
        else if(str=="show")
        {
            if(Front>rear)
                {
                for(int i=Front;i<=N;i++)
                {
                    cout<<A[i]<<" ";
                }
                for(int i=rear;i<Front;i++)
                    cout<<A[i]<<" ";
                    cout<<endl;
                }
                else
                {
                    for(int i=Front;i<=rear;i++)
                        cout<<A[i]<<" ";
                    cout<<endl;
                }
        }
        else if(str=="delete")
        {
            if(j==1)
            {
                cout<<"Delete Koro Nai";
            }
            else
         for(int i=1;i<j;i++)
            cout<<B[i]<<" ";
         cout<<endl;
        }
        else if(str=="exit")
       break;
    }
    return 0;
}
