#include<bits/stdc++.h>
using namespace std;
class SORT
{
    int data[100];
public:
    int Babble_sort(int b[ ],int n)
    {
        for(int i=0;i<n;i++)
        {
            int j=0;
            while(j<n-i)
            {
                if(b[j]>b[j+1])
                {
                    swap(b[j],b[j+1]);
                }
                j++;
            }
        }
        for(int i=0;i<n;i++)
        data[i]=b[i];
    }
    void display(int n)
    {
        cout<<data[0];
        for(int i=1;i<n;i++)
        cout<<" "<<data[i];
        cout<<endl;
    }
};
int main()
{
    int n,a[140],m;
    SORT s;
    cout<<"Enter the number of array: ";
    cin>>n;
    cout<<"Insert the value: ";
    for(int i=1;i<=n;i++)
    cin>>a[i];
    s.Babble_sort(a,n);
    s.display(n);
    return 0;
}
