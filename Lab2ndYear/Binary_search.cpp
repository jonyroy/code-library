#include<iostream>
using namespace std;
class Binary
{
public:
    int Binary_search(int a[ ],int item,int n)
    {
        int Beg,End,Mid,Loc;
        Beg=1;
        End=n;
        Mid=(Beg+End)/2;
        while(Beg<=End&&a[Mid]!=item)
        {
            if(item<a[Mid])
            End=Mid-1;
            else
            Beg=Mid+1;
            Mid=(Beg+End)/2;
            if(a[Mid]==item)
            Loc=Mid;
            else
            Loc=0;
        }
        return Loc;
    }
};
int main()
{
    int a[10002],n,item;
    Binary B;
    cout<<"Enter the number of array size: ";
    cin>>n;
    cout<<"Please insert the array value ascending order: ";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<"Insert the item; ";
    cin>>item;
    cout<<B.Binary_search(a,item,n)<<endl;
    return 0;
}
