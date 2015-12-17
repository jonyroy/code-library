#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<pair<int,int> >a;
//    pair<int,int>a[100];
    scanf("%d",&n);
    for(int i=0;i<2*n;i++)
    {
        int b,c;
        scanf("%d%d",&b,&c);
        a.push_back(make_pair(b,c));
//      a[i]=make_pair(b,c);
    }
    sort(a.begin(),a.end());
    for(int i=0;i<2*n;i++)
    cout<<a[i].first<<" "<<a[i].second<<endl;
    return 0;
}
