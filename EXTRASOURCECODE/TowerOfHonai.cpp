#include<bits/stdc++.h>
using namespace std;
int towerOfhanoi(int n,int A,int B, int C)
{
    if(n>0)
    {
        towerOfhanoi(n-1,A,C,B);
        cout<<"Move "<<A<<" "<<C<<endl;
        towerOfhanoi(n-1,B,A,C);
    }
    return 0;
}
int main()
{
    int n;
    cin>>n;
    towerOfhanoi(n,1,2,3);
    return 0;
}
