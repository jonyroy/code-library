#include<bits/stdc++.h>
using namespace std;
int main()
{
    int seq[100005],n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>seq[i];
    int s=1,en=1;
    for(int i=1; i<n; i++)
        {
            if(seq[i]>seq[i+1])
                {
                    s=i;
                    i++;
                    bool t=true;
                    while(seq[i]>seq[i+1]&&i<n)
                        {
                            en=i+1;
                            t=false;
                            i++;
                        }
                    if(t)
                        en=i;
                    break;
                }
        }
    int temp=seq[s];
    seq[s]=seq[en];
    seq[en]=temp;

    for(int i=s; i>1; i--)
        {
            if(seq[i]<seq[i-1])
                {
                    cout<<"no\n";
                    return 0;
                }
        }
    for(int i=en; i<n; i++)
        {
            if(seq[i]>seq[i+1])
                {
                    cout<<"no\n";
                    return 0;
                }
        }
    cout<<"yes\n";
    cout<<s<<" "<<en<<endl;
}
