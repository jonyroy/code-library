#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum=0,sum2=0,h=0,l=0,o=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        sum+=x,sum2+=y;
        if(x%2==1&&y%2==0)
         h++;
        if(x%2==0&&y%2==1)
           l++;
           if(x%2==1&&y%2==1)
            o++;
    }
    if(sum%2==0&&sum2%2==0)
        cout<<"0\n";
        else if(o%2==0&&h==0&&l==0)
            cout<<"1\n";
        else if(o%2==1&&h==0&&l==0)
            cout<<"-1\n";
        else if(h==0||l==0)
        {
           if(h==0&&l%2==0&&o%2==1)
            cout<<"1\n";
           else if(l==0&&h%2==0&&o%2==1)
            cout<<"1\n";
           else
            cout<<"-1\n";
        }
    else if(h==l)
        {
            if(o%2==1&&h%2==0)
            cout<<"1"<<endl;
            else if(o%2==0&&h%2==1)
                cout<<"1"<<endl;
                else if(h%2)
                cout<<"1"<<endl;
                else
                cout<<"-1\n";
        }
    else if(o%2==1&&(h%2==0&&l%2==0))
    {

        cout<<"1\n";
    }
    else if(o%2==0&&(h%2==1&&l%2==1))
    {

        cout<<"1\n";
    }
    else
       cout<<"-1\n";
    return 0;
}
