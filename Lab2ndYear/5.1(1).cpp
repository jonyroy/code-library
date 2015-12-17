/*
5.1(1):
problem:
Given this partially defined class
class strtype{
	char *p;
	int len;
public:
   char*getstring(){return p;}
   int getlength(){return len;}
};
add two constructor functions. Have the first one take no parameters.
Have this one allocate 255 bytes of memory(using new), initialize that memory as a null string,
and given len a value of 255. Have the other constructor take two parameters. The first is the string
to use for initialization and the other is the number of bytes to allocate. Have this version allocate the
specified amount of memory and copy the string to that meory. Perform all necessary boundary checks and
demonstrate that your constructors work by including a short program.
*/
#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;
class strtype{
    char *p;
    int len;
public:
    strtype();
    strtype(char *s, int l);
    char *   getstring(){return p;}
    int getlength(){return len;}
};
strtype :: strtype()
{
    p = new char [100];
    if(!p){
        cout<<"Allocation error\n";
        exit(1);
    }
    p[0] = '\0';
    len = 255;
}
strtype :: strtype(char *s,int l)
{
    if(strlen(s)>=l){
        cout<<"Allocating too little memory!\n";
        exit(1);
    }
    p= new char[l];
    cout<<p<<endl;
    if(!p){
        cout<<"Allocation error\n";
        exit(1);
    }
    strcpy(p, s);
    len = l;
}
int main()
{
    strtype s1;
    strtype s2("This is a test", 100);
    cout<<"s1: "<<s1.getstring()<<" - Length: ";
    cout<<s1.getlength()<<'\n';
    cout<<"s2: "<<s2.getstring()<<" - Length: ";
    cout<<s2.getlength()<<'\n';
    return 0;
}
