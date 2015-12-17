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
    #define F first
    #define S second
    #define MAX 1000500
    #define EPS (1E-9)
    #define sqr(x) ((x) * (x))
    #define pb(x) push_back(x)
    #define pob(x) pop_back(x)
    #define mp(x) make_pair(x)
    #define PI 3.141592653589793
    #define Fill(a,b) memset(a,b,sizeof(a))
    #define FOR(i,k,n) for(int i = k; i <= n; i++)
    #define rep(i,k,n) for(int i=n;i>=k;i--)
    typedef int I;
    typedef long L;
    typedef float FL;
    typedef double D;
    typedef long long LL;
    typedef vector<int>VI;
    typedef pair<int,int> PII;
    typedef long double LD;
    typedef vector<long int>VL;
    typedef unsigned long long ULL;
    long int status[100010];
    int main()
    {
        string str,s;
        int count=0;
        getline(cin,str);
        cout<<"\n\n";
        cout<<"  1=Find\n  2=Insert\n  3=Delete\n  4=Replace\n";
        cout<<"Enter Item=";
        getline(cin,s);
        int found=0;
        int test;
        cin>>test;
        //getchar();
        if(test==1)
        {
            found=str.find(s);
            if(found>=0)
            {
            count++;
            while(found>=0)
            {
                found=str.find(s,found+1);
                if(found>=0)
                count++;
            }
            cout<<"Item Occurence "<<count<<" Times\n";
            }
            else
                cout<<"Not Found\n";
        }
        else if(test==2)
        {
            found=str.find(s);
            str.insert(found,s);
             cout<<str<<endl;
        }
        else if(test==3)
        {
            found=str.find(s);
            str.erase(found,s.size());
             cout<<str<<endl;
        }
        return 0;
    }

