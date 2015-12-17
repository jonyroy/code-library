#include<bits/stdc++.h>
using namespace std;
int main()
{
    string::iterator it;
    string::reverse_iterator itt;
    string base="The quick brown fox jumps over a lazy dog.";
    string str,str1,str2;
    str1="Jony";
    str2="Roy";
    str=str1+str2;
    sort(str.begin(),str.end());
    for(it=str.begin();it!=str.end();it++)
       cout<<*it;
    for(itt=str.rbegin();itt!=str.rend();itt++)
       cout<<*itt;
    int len=str.size();
    int len2=str.length();
    str.resize(100);
    str.clear();
    char ch=str.at(2);
    cout<<ch<<endl;
    str.append(str2);                       //"Writing "
    str.append(str2,6,3);                   //"10 "
    str.append("dots are cool",5);          //"dots "
    str.append("here: ");                   //"here: "
    str.append(str2.begin()+8,str2.end());  //" and then 5 more"
    str.assign(base);
    cout << str << '\n';
    str.assign(base,10,9);
    cout << str << '\n';         // "brown fox"
    str.assign("pangrams are cool",7);
    cout << str << '\n';         // "pangram"
    str.assign("c-string");
    cout << str << '\n';         // "c-string"
    str.assign(10,'*');
    cout << str << '\n';         // "**********"
    str.assign(base.begin()+16,base.end()-12);
    cout << str << '\n';         // "fox jumps over"
    return 0;
}
