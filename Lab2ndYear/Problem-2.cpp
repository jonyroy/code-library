//AAAABCCCCCDDDD
#include<bits/stdc++.h>
using namespace std;

class AAAABBBCCC
{
    string st,s;
public:
    bool input();
    void display();
    void uncompressed();
};


bool AAAABBBCCC::input()
{
    int sum=0;
    cin>>st;
    if(st.size()==5)
    {
    for(int i=0;i<st.size();i++)
    {
       sum+=(st[i]-48);
    }
    if(sum)
    return true;
    else
        return false;
    }
    return true;
}



void AAAABBBCCC::uncompressed()
{
    bool test;
    for(int i=0;i<st.size();i++)
    {
        int sum=0;
        test=true;
        string str;
        while(isdigit(st[i]))
        {
            str+=st[i];
            i++;
            test=false;
        }
        sum=atoi(str.c_str());
        for(int j=0;j<sum;j++)
        s+=st[i];
        if(test)
        s+=st[i];
    }
}

void AAAABBBCCC::display()
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    if((i+1)%40==0)
    cout<<"\n";
    }
    s.clear();
}
int main()
{
    AAAABBBCCC a;
    while(a.input())
    {
        a.uncompressed();
        a.display();
    }
    return 0;
}
