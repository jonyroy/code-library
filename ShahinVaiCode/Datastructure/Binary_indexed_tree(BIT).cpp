#include<bits/stdc++.h>
using namespace std;
#define MaxVal 100007
int tree[MaxVal+1]; //Define a space for BIT
int read(int idx)
{
    int sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=(idx&-idx);
    }
    return sum;
}
void update(int idx,int val)
{
    while(idx<=MaxVal)
    {
        tree[idx]+=val;
        idx+=(idx&-idx);
    }
}

int main()
{
    int n,x;
    cin>>n>>x;
    update(n,x);
    update(n+1,-x);
    cout<<read(n-1)<<endl;
    return 0;
}


