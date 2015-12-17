/*
2.2(1):
problem:
Change the stack class so it dynamically allocates memory for the stack.
Have the size of the stack specified by a parameter to the constructor function.
(Don't forget to free this memory with a destructor function.)
*/
// dynamically allocated stack.
#include<iostream>
#include<cstdlib>
using namespace std;
class stack{
    char *stck;
    int tos;
    int size;
public:
    stack(int s);
    ~stack();
    void push(char ch);
    char pop();
};
stack :: stack(int s)
{
    cout<<"Constructing a stack\n";
    tos =0;
    stck = (char *) malloc(s);
    if(!stck){
        cout<<"Allocation error\n";
        exit(1);
    }
    size = s;
}
stack :: ~stack()
{
    free(stck);
}
void stack :: push(char ch)
{
    if(tos==size){
        cout<<"Stack is full\n";
        return;
    }
    stck[tos]=ch;
    tos++;
}
char stack :: pop()
{
    if(tos==0){
        cout<<"Stack is empty\n";
        return 0;
    }
    tos--;
    return stck[tos];
}
int main()
{
    stack s1(10),s2(10);
    int i;
    s1.push('a');s2.push('x');s1.push('b');s2.push('y');s1.push('c');s2.push('z');
    for(i=0;i<3;i++)
        cout<<"Pop s1: "<<s1.pop()<<"\n";
    for(i=0;i<3;i++)
        cout<<"Pop s2: "<<s2.pop()<<"\n";
        return 0;
}
