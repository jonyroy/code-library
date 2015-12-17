#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s[]={"Howard","Sheldon","Leonard","Penny","Rajesh","Howard"};
    int n;
    while(cin>>n)
    {
        if(n<=5)
        {
            cout<<s[n%5]<<endl;
            continue;
        }
    double a=ceil((double)n/(double)5.0),b;
    //cout<<a<<endl;
    b=(log10(a)/log10(2.0));
    //cout<<b<<endl;
    int m=(int)b;
    //cout<<m<<endl;
    a=pow(2.0,(double)m);
    a=a-1;
    double cnt=pow(2.0,(double)m);
    //cout<<a<<endl;
    int cn=(int)a;
    //cout<<cn<<endl;
    n=n-5*cn;
    //cout<<n<<endl;
    a=ceil((double)n/cnt);
    //cout<<a<<endl;
    cn=(int)a;
    //cout<<cn<<endl;
    //cout<<cn<<endl;
    cout<<s[cn]<<endl;
    }
    return 0;
}
