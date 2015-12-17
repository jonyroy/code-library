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
int Print(char Info[ ],int Link[ ],int start)
{
    if(start==0)
    return 0;
    cout<<Info[start]<<endl;
    start=Link[start];
    Print(Info,Link,start);
}
int main()
{
    char Info[100]={'0','D','0','K','J','0','B','S','0','M','R','0','T'};
    int Left[100]={0,4,5,9,3,8,1,12,11,10,7,0,0};
    int Right[100]={0,6,0,4,1,2,0,10,5,3,9,8,7};
    int start=6;
    cout<<"Left Traversing:"<<endl;
    Print(Info,Left,start);
    cout<<"Right Traversing:"<<endl;
    int Last=12;
    Print(Info,Right,Last);
    return 0;
}
