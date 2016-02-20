#include<stdio.h>
#include <unistd.h>
#include<bits/stdc++.h>
using namespace std;
#define f(x) x*x+x+2
//gotoxy function
void gotoxy(int x,int y)
{
    printf("%c[%d;%df",0x1B,x,y);
}
main ()
{
    vector<int> jony;
    int bb[1000000];
    int a,b;
    string s;
    cin>>s;
    //gotoxy(1,5);
    cin>>a;
    cout<<s<<endl;
    return 0;
}
