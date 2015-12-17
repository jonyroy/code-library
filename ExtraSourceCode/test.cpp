#include<bits/stdc++.h>
using namespace std;
bool test(int n)
{
    int m[12]={0};
    while(n)
    {
        int b=n%10;
        m[b]++;
        n=n/10;
    }
    for(int i=0;i<10;i++)
        if(m[i]>1)
        return false;
    return true;
}
int main()
{
	set<int> a;
	for(int i=100;i<=999;i++)
    {
        if(i%2)
        {
        bool jony=test(i);
        if(jony)
            a.insert(i);
        }
    }
    cout<<a.size()<<endl;
	return 0;
}
