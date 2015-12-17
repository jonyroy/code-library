#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define MAX 1002
class Preorder
{
    int Info[MAX];
    int Left[MAX];
    int Right[MAX];
public:
    void getdata(int n)
    {
        for(int i=1;i<=n;i++)
        cin>>Info[i]>>Left[i]>>Right[i];
        //.getchar();
    }
    void process(int root)
    {
        int STACK[MAX];
        int top,ptr;
        top=0;
        STACK[0]=0;
        ptr=root;
        while(ptr!=0)
        {
            cout<<Info[ptr]<<" ";
            if(Right[ptr]!=0)
            {
                top++;
                STACK[top]=Right[ptr];
            }
            if(Left[ptr]!=0)
            {
                ptr=Left[ptr];
            }
            else
            {
                ptr=STACK[top];
                top--;
            }
        }
    }
};
int main()
{
    int n,root;
    Preorder p;
    cin>>n;
    p.getdata(n);
    cout<<"Enter the root";
    cin>>root;
    cout<<root<<endl;
    p.process(root);
    return 0;
}
