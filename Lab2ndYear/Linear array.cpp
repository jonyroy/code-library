#include<iostream>
using namespace std;
class Array
{
public:
    void Insert(int LA[ ],int n,int k,int item)
    {
        int j=n;
        while(j>=k)
        {
            LA[j+1]=LA[j];
            j--;
        }
        LA[k]=item;
        n++;
        cout<<"The new array element"<<endl;
        for(int i=1;i<=n;i++)
        cout<<LA[i]<<" ";
        cout<<endl;
    }
};
int main()
{
    int a[1000],n,item,k;
    Array ar;
    cout<<"Insert the array size: ";
    cin>>n;
    cout<<"Insert the array element: ";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    cout<<"Insert the item and position: ";
    cin>>item>>k;
    ar.Insert(a,n,k,item);
    return 0;
}
