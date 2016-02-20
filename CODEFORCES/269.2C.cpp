#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){
    LL n;
    cin>>n;
    for(int i=1;i<=n;i++){
    LL now=2;
    LL add=5;
    LL an=0;
    for(;now<=i;){
        if((i-now)%3==0)an++;
        now+=add;
        add+=3;
    }
    cout<<an<<" ";
    }
    return 0;
}
