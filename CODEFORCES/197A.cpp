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
        string str;
        cin>>str;
        int a=str.size();
        sort(str.begin(),str.end());
        int j=0;
        while(str[j]=='+')
            j++;
            for(int i=j;i<a-1;i++)
                cout<<str[i]<<"+";
            cout<<str[a-1]<<endl;
        return 0;
    }
