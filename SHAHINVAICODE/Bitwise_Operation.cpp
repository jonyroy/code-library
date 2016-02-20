#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a=10,b=5,x=1,c,n;
//Many set operations can be achieved by bitwise and integer arithmetic:

//Set union:
//A|B;
c=a|b;
cout<<a<<" | "<<b<<" = "<<c<<endl;

//Set intersection:
//A & B
c=a&b;
cout<<a<<" & "<<b<<" = "<<c<<endl;

//Set subtraction:
//A & ~B
c=a&~b;
cout<<a<<" &~ "<<b<<" = "<<c<<endl;

//Test if set is non-empty:
//A != 0
if(a!=0)
cout<<"set is non-empty. "<<endl;
else
cout<<"set is empty. "<<endl;

//Test whether element x is in A:
//(A & (1 << x)) != 0
if((a&(1<<x))!=0)
cout<<"element x is in A. "<<endl;
else
cout<<"element x is not in A."<<endl;

//The set containing {0, ..., x - 1}:
//(1 << x) - 1
c=(1<<x)-1;
cout<<"The set containing {0, ..., x - 1}"<<endl;


//Put x in A (works even if x is already in A):
//A |= 1 << x;
a|=1<<x;
cout<<"Put x in A (works even if x is already in A)"<<endl;

//Remove x from A (works even if x is not in A):
//A &= ~(1 << x);
a&=~(1<<x);
cout<<"Remove x from A (works even if x is not in A)"<<endl;
//Set negation:
//((1 << N) - 1) & ~A
n=3;
c=((1<<n)-1)&~a;
cout<<c<<endl;

//Test whether A has exactly one element:
//(A > 0) && (A & (A - 1)) == 0
if((a>0)&&(a&(a-1))==0)
cout<<"whether A has exactly one element"<<endl;

//Remove the smallest element from A:
//A = A & (A - 1)
a=a&(a-1);
cout<<"Remove the smallest element from A, "<<c<<endl;

//Remove all but the smallest element from A:
//A = A & ~(A - 1)
a=a&~(a-1);
cout<<"Remove all but the smallest element from A:"<<a<<endl;
//find all subset from given set...
cout<<endl;
int s=11;
cout<<"find all subset from given set: "<<s<<endl;
for(int i=s;i>0;i=(i-1)&s)
cout<<i<<" ";
    return 0;
}


