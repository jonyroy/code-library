#include<bits/stdc++.h>
#include <termios.h>
#include <unistd.h>
using namespace std;
string s,str;
ofstream pass;
ifstream pa;
int ResetPassword()
{
    string newp,n,shivazi;
    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    pa.open("pass.bin",ios::app);
    pa>>shivazi;
    pa.close();
    for(int i=0; i<shivazi.length(); i++)
        shivazi[i]-=1;
    while(1)
        {
            string d;
            cout<<"\n  Enter Your Old Password:=";
            cin>>d;
            if(shivazi==d)
                {
                    break;
                }
            else
                cout<<"\n     Maybe You are not Owner Of The Diary.\n     Wanna Hack? Then Try another Combination.";
        }
    pass.open("pass.bin");
    while(1)
        {
            cout<<"\n  Enter Your New Password:=";
            cin>>newp;
            cout<<"\n  Retype New Password:=";
            cin>>n;
            if(n==newp)
                {
                    for(int i=0; i<n.length(); i++)
                        n[i]+=1;

                    pass<<n;
                    pass.close();
                    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
                    return 0;
                }
            else
                {
                    cout<<"\n  Doesn't Match......Try Again.\n";
                }
        }
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
int SetPassword()
{
    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    pass.open("pass.bin",ios::app);
    while(1)
        {
            cout<<"\n  Enter Password:=";
            string jon,jony;
            cin>>jon;
            cout<<"\n  Retype Password=";
            cin>>jony;
            if(jon==jony)
                {
                    for(int i=0; i<jon.length(); i++)
                        jon[i]+=1;
                    pass<<jon;
                    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
                    pass.close();
                    return 0;
                }
            else
                cout<<"\n  Doesn't Match......Try Again.\n";
        }
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
}
int ReadText()
{
    pass.open("text.bin",ios::app);
    time_t rawtim;
    time (&rawtim);
    string anagram_time=ctime (&rawtim);
    for(int i=0; i<anagram_time.length(); i++)
        anagram_time[i]+=1;
    pass<<anagram_time;
    while(1)
        {
            getline(cin,str);
            if(str=="q")
                break;
            for(int i=0; i<str.length(); i++)
                str[i]+=1;
            pass<<str<<endl;
        }
    pass.close();
}
bool CheckPassword()
{
    pa.open("pass.bin",ios::app);
    pa>>s;
    pa.close();
    string jon;
    cout<<"\n  Enter Your Password:=";
    termios oldt;
    tcgetattr(STDIN_FILENO, &oldt);
    termios newt = oldt;
    newt.c_lflag &= ~ECHO;
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    cin>>jon;
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    cin.ignore();
    for(int i=0; i<s.length(); i++)
        s[i]-=1;
    if(jon==s)
        {
            return true;
        }
    else
        return false;
}
int PrevText()
{
    pa.open("text.bin",ios::app);
    while(getline(pa,str))
        {
            for(int i=0; i<str.length(); i++)
                str[i]-=1;
            cout<<str<<endl;
        }
    pa.close();
}
int main()
{

    pa.open("pass.bin",ios::app);
    pa>>s;
    pa.close();
    if(s.length()==0)
        {
            cout<<"     Hey Guys You Don't Set Password Yet.\n";
            cout<<"     Do You Wanna Set Your Password (Y/N)=";
            char a;
            cin>>a;
            if(toupper(a)=='Y')
                {
                    SetPassword();
                    cout<<"\n             Welcome\n      Type Your Text Here.\n      Type 'q' for quit............\n";
                    ReadText();
                }
            else
                {
                    cout<<"\n          May be You Don't Like It.\n";
                    return 0;
                }
        }
    else
        {
            printf("     Do You Want To change Your Password? Type := 1\n");
            printf("     Do You Want To continue  Writing Type Any Key.\n");
            string m;
            getline(cin,m);
            if(m=="1")
                {
                    ResetPassword();
                    cout<<"\n             Welcome\n      Type Your Text Here.\n      Type 'q' for quit............\n";
                    ReadText();
                }
            else
                {
                    while(1)
                        {
                            if(CheckPassword())
                                {
                                    system("reset");
                                    cout<<"\n             Welcome\n      Type Your Text Here.\n      Type 'q' for quit............\n";
                                    ReadText();
                                    break;
                                }
                            else
                                cout<<"\n     Maybe You are not Owner Of The Diary.\n     Wanna Hack? Then Try another Combination.";
                        }
                }
        }
    cout<<"     Do You Wanna See Dairy type (Y/N)=";
    char h;
    cin>>h;
    if(toupper(h)=='Y')
        {
            PrevText();
        }
    else
        cout<<"          It's ok.";
    return 0;
}
