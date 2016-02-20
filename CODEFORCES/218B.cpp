    #include<set>
    #include<list>
    #include<map>
    #include<stack>
    #include<bitset>
    #include<ctime>
    #include<string>
    #include<deque>
    #include<queue>
    #include<cstdio>
    #include<cmath>
    #include<utility>
    #include<vector>
    #include<cstdlib>
    #include<cstring>
    #include<cstring>
    #include<cassert>
    #include<fstream>
    #include<sstream>
    #include<complex>
    #include<iostream>
    #include<stdbool.h>
    #include<algorithm>
    #include<functional>
    using namespace std;
    int main()
    {
        int minsum=0,maxsum=0,n,m;
        vector<int>a,b;
        //a.resize(1005);
        //b.resize(1005);
        cin>>n>>m;
        for(int i=0;i<m;i++)
            {
                int mn;
            cin>>mn;
            a.push_back(mn);
            b.push_back(mn);
            }
        for(int i=1;i<=n;i++)
        {
            sort(a.begin(),a.end());
            for(int j=m-1;j>=0;j--)
            {
                if(a[j]>0)
                {
                    maxsum+=a[j];
                    a[j]--;
                    break;
                }
            }

        }
        for(int i=1;i<=n;i++)
        {
            sort(b.begin(),b.end());
            for(int j=0;j<m;j++)
            {
                if(b[j]>0)
                {
                    minsum+=b[j];
                    b[j]--;
                    break;
                }
            }
        }
        cout<<maxsum<<" "<<minsum<<endl;
        return 0;
    }
