/*
* Author: Jony Roy
* Date:21-01-2016
*/
#include<bits/stdc++.h>
using namespace std;
int PrimeStore[10000]= {0};
int breadthFirstSearch(int n,int m)
{
    int viSitPrime[10000]= {0};
    int diStancePrime[10000]= {0};
    int notPushAgain[10000]={0};
    queue<int> qPrime;
    qPrime.push(n);
    viSitPrime[n]=1;
    diStancePrime[n]=0;
    notPushAgain[n]=1;
    while(!qPrime.empty())
    {
        int popPrime=qPrime.front();
        qPrime.pop();
        viSitPrime[popPrime]=1;
        int tempPrime=popPrime;
        int reCeivePrime=popPrime;
        int remainDer=tempPrime%10;
        reCeivePrime=reCeivePrime/10;
        tempPrime=tempPrime-remainDer;
        for(int i=1; i<=9; i+=2)
        {
            if(remainDer!=i)
            {
                int cnt=tempPrime;
                cnt+=i;
                if(PrimeStore[cnt]==0 && viSitPrime[cnt]==0 && notPushAgain[cnt]==0)
                {
                    diStancePrime[cnt]=diStancePrime[popPrime]+1;
                    qPrime.push(cnt);
                    notPushAgain[cnt]=1;
                }
            }
        }
        tempPrime=popPrime;
        remainDer=reCeivePrime%10;
        reCeivePrime=reCeivePrime/10;
        remainDer=remainDer*10;
        tempPrime=tempPrime-remainDer;
        for(int i=0; i<=9; i++)
        {
            if(remainDer!=i)
            {
                int cnt=tempPrime;
                cnt+=(i*10);
                if(PrimeStore[cnt]==0 && viSitPrime[cnt]==0 && notPushAgain[cnt]==0)
                {
                    diStancePrime[cnt]=diStancePrime[popPrime]+1;
                    qPrime.push(cnt);
                    notPushAgain[cnt]=1;
                }
            }
        }

        tempPrime=popPrime;
        remainDer=reCeivePrime%10;
        reCeivePrime=reCeivePrime/10;
        remainDer=remainDer*100;
        tempPrime=tempPrime-remainDer;
        for(int i=0; i<=9; i++)
        {
            if(remainDer!=i)
            {
                int cnt=tempPrime;
                cnt+=(i*100);
                if(PrimeStore[cnt]==0 && viSitPrime[cnt]==0 && notPushAgain[cnt]==0)
                {
                    diStancePrime[cnt]=diStancePrime[popPrime]+1;
                    qPrime.push(cnt);
                    notPushAgain[cnt]=1;
                }
            }
        }
        tempPrime=popPrime;
        remainDer=reCeivePrime%10;
        reCeivePrime=reCeivePrime/10;
        remainDer=remainDer*1000;
        tempPrime=tempPrime-remainDer;
        for(int i=1; i<=9; i++)
        {
            if(remainDer!=i)
            {
                int cnt=tempPrime;
                cnt+=(i*1000);

                if(PrimeStore[cnt]==0 && viSitPrime[cnt]==0 && notPushAgain[cnt]==0)
                {
                    diStancePrime[cnt]=diStancePrime[popPrime]+1;
                    qPrime.push(cnt);
                    notPushAgain[cnt]=1;
                }
            }
        }
    }
    return diStancePrime[m];
}
int main()
{

    for(int i=3; i<=sqrt(10000); i+=2)
    {
        if(PrimeStore[i]==0)
            for(int j=i*i; j<=10000; j+=i)
            {
                PrimeStore[j]=1;
            }
    }
    int n,m,cv,testCase;
    cin>>testCase;
    for(int i=1; i<=testCase; i++)
    {
        cin>>n>>m;
        int cv=breadthFirstSearch(n,m);
        cout<<cv<<endl;
    }
    return 0;
}

