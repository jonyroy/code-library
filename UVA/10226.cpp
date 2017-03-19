/*
* Author: Jony Roy
* Date: 10-07-2016
* Contact: jonyroyice@gmail.com
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    scanf("%d\n\n",&tc);
    //getchar();
    //getchar();
    while(tc--)
    {
        string st;
        int cnt=0;
        map<string,int>a;
        while(getline(cin,st))
        {
            if(st.size()==0)
                break;
            a[st]++;
            cnt++;
        }
        double m=100.0/(double)cnt;
        map<string ,int>::iterator it;
        it=a.begin();
        for(; it!=a.end(); it++)
        {
            int cn=it->second;
            cout<<it->first<<" ";
            double b=m*(double)cn;
            printf("%.4lf\n",b);
        }
        if(tc)
            printf("\n");
        a.clear();
    }
    return 0;
}
