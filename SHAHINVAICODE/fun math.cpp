#include<bits/stdc++.h>
using namespace std;


long long pw[50];
void call(long long n)
{
    int r;
    while(n>0)
    {
        r=n%31;
        printf("%c",r+96);
        n=n/31;
    }
}

int main()
{
    char name[100];
   long long int i,n=0,l;
    pw[0]=1;
    for(i=1;i<16;i++)
    {pw[i]=pw[i-1]*31;
    //cout<<pw[i]<<endl;
    }
    /*while(1)
    {
        n=0;
        scanf("%s",name);
        if(name[0]=='*')
        break;
    l=strlen(name);
    for(i=0;i<l;i++)
    n=n+(name[i]-96)*pw[i];
    cout<<n<<" ";
    }*/
    while(1){
    cin>>n;
    call(n);
    cout<<endl;
    }
    return 0;
}


