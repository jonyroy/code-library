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
int main()
{

    pair<int,int>v[10];
    int a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        if(a==0&&b==0&&c==0&&d==0)
            break;
        v[0]=make_pair(a,b);
        v[1]=make_pair(c,d);
        cin>>a>>b>>c>>d;
        v[2]=make_pair(a,b);
        v[3]=make_pair(c,d);
        if(v[2].first==v[3].first);
        {
            if(v[0].first<v[2].first&&v[1].first>v[2].first)
                {
                if(v[0].second>=v[2].second&&v[0].second<=v[3].second)
                if(v[1].second>=v[2].second&&v[1].second<=v[3].second)
                {
                    float f=(float)sqrt(((v[0].first-v[2].first)*(v[0].first-v[2].first))+((v[0].second-v[2].second)*(v[0].second-v[2].second)));
                    float g=(float)sqrt(((v[1].first-v[2].first)*(v[1].first-v[2].first))+((v[1].second-v[2].second)*(v[1].second-v[2].second)));
                    float h=f+g;
                     f=(float)sqrt(((v[0].first-v[3].first)*(v[0].first-v[3].first))+((v[0].second-v[3].second)*(v[0].second-v[3].second)));
                     g=(float)sqrt(((v[1].first-v[2].first)*(v[1].first-v[2].first))+((v[1].second-v[2].second)*(v[1].second-v[2].second)));
                     float i=f+g;
                     cout<<min(h,i)/2.0<<endl;
                     continue;
                }
                }
                else
                    {
                float f=(float)sqrt(((v[0].first-v[1].first)*(v[0].first-v[1].first))+((v[0].second-v[1].second)*(v[0].second-v[1].second)));
                cout<<f/2.0<<endl;
                continue;
                    }
        }
             if(v[0].second<v[2].second&&v[1].second>v[2].second)
                {
                if(v[0].first>=v[2].first&&v[0].first<=v[3].first)
                if(v[1].first>=v[2].first&&v[1].first<=v[3].first)
                {
                    float f=(float)sqrt(((v[0].first-v[2].first)*(v[0].first-v[2].first))+((v[0].second-v[2].second)*(v[0].second-v[2].second)));
                    float g=(float)sqrt(((v[1].first-v[2].first)*(v[1].first-v[2].first))+((v[1].second-v[2].second)*(v[1].second-v[2].second)));
                    float h=f+g;
                     f=(float)sqrt(((v[0].first-v[3].first)*(v[0].first-v[3].first))+((v[0].second-v[3].second)*(v[0].second-v[3].second)));
                     g=(float)sqrt(((v[1].first-v[2].first)*(v[1].first-v[2].first))+((v[1].second-v[2].second)*(v[1].second-v[2].second)));
                     float i=f+g;
                     cout<<min(h,i)/2.0<<endl;
                     continue;
                }
                }
                else
                    {
                float f=(float)sqrt(((v[0].first-v[1].first)*(v[0].first-v[1].first))+((v[0].second-v[1].second)*(v[0].second-v[1].second)));
                cout<<f/2.0<<endl;
                continue;
                    }
    }
    return 0;
}
