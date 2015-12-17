#include<iostream>
#include<cstring>
using namespace std;
class encode
{
    public:
    char Text[100];
    char output[100];

    void getinput()
    {
        cin.getline(Text,100);
    }
    void solve(int n)
    {
        int l;
        l=strlen(Text);
        for(int i=1;i<l;i++)
        {
            if(Text[i]>=65&&Text[i]<=90)
            {
                int m;
                m=Text[i]-n;
                if(m>=65&&m<=90)
                output[i-1]=m;
                else
                output[i-1]=m+26;
            }
            else if(Text[i]>=97&&Text[i]<=122)
            {
                int m;
                m=Text[i]-n;
                if(m>=97&&m<=122)
                output[i-1]=m;
                else
                output[i-1]=m+26;
            }
            else
                output[i-1]=Text[i];
        }
        output[l-1]=0;
    }
    void display()
    {
        cout<<output<<endl<<endl;
        output[0]=0;
    }

};
int main()
{
    encode en;
    while(1)
    {
        en.getinput();
        int l;
        l=en.Text[0]-48;
        if(l==0)
        break;
        en.solve(l);
        en.display();
    }
    return 0;
}
