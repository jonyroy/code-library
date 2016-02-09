#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a,b;
    int n,x1,y1,x2,y2;
    cin>>n>>x1>>y1>>x2>>y2;
    for(int i=1;i<=n;i++)
    {
        int xx,yy;
        cin>>xx>>yy;
        int z=(xx-x1)*(xx-x1)+(yy-y1)*(yy-y1);
        a.push_back(z);
        z=(xx-x2)*(xx-x2)+(yy-y2)*(yy-y2);
        b.push_back(z);
    }
    return 0;
}
