#include<bits/stdc++.h>
using namespace std;
#define MAXN 65536

char S[MAXN+1];
int SA[MAXN];
int cmp(void const*a,void const*b)
{
    int i = *(int*)a, j = *(int*)b;
    return strcmp(S+i, S+j);
}

int main()
{
    int n = strlen(gets(S));

    for(int i=0;i<n;i++)
    SA[i]=i;
    qsort(SA,n,sizeof(int),cmp);
    for(int i=0;i<n;i++)
    {
        cout<<SA[i]<<"-> ";
        for(int j=SA[i];j<n;j++)
        cout<<S[j];
        cout<<endl;
    }
    //find any substring then call binnary search
    return 0;
}
