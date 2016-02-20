#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n, k, l, c, d, p, nl, np;
    while(cin>>n>>k>>l>>c>>d>>p>>nl>>np)
    {
    k=k*l;
    c=c*d;
    k=k/nl;
    p=p/np;
    cout<<min(c,min(k,p))/n<<endl;
    }
    return 0;
}
