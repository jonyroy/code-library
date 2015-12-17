/*
3.2(1):
problem:
Using the stack example from Section 3.1, Example 2,add a function called showstack()
that is passed an object of type stack. Have this function display the contents of a stack.
*/
#include<iostream>
using namespace std;
#define SIZE 10
class stack{
    char stck[SIZE];
    int tos;
public:
    stack();
    void push(char ch);
    char pop();
    void showstack(stack);
};
stack :: stack()
{
    cout<<"Constructing a stack\n";
    tos = 0;
}
void stack :: push(char ch)
{
    if(tos==SIZE){
        cout<<"Stack is full\n";
        return;
    }
    stck[tos] = ch;
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
void stack::showstack(stack o)
{
    char c;
    while(c=o.pop())
        cout<<c<<"\n";
    cout<<"\n";
}
int main()
{
    stack s1;
    int i;s1.push('a');s1.push('b');s1.push('c');
    showstack(s1);
    cout<<"s1 stack still contains this: \n";
    for(i=0;i<3;i++)
    cout<<s1.pop()<<"\n";
    return 0;
}
