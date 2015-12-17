    #include<set>
    #include<list>
    #include<map>
    #include<stack>
    #include<bitset>
    #include<ctime>
    #include<string>
    #include<conio.h>
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
        long long int n,m,a[100005],sum=0;
        cin>>n>>m;
        for(int i=1;i<=m;i++)
        {
            cin>>a[i];
        }
        sum=a[1]-1;
        for(int i=2;i<=m;i++)
        {
               if(a[i]<a[i-1])
               {
                   sum=sum+(n-a[i-1])+(a[i]-1)+1;
               }
               else
                sum=sum+a[i]-a[i-1];
        }
        cout<<sum<<endl;
        return 0;
    }
