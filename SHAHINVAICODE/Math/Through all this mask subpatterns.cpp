/*
 Through all this mask subpatterns

Enumerating subpatterns fixed mask

Dana bitmask m . Requires effectively enumerate all its subpatterns, ie such
masks s , Which may be included only those bits that are included in the mask
m .Immediately look at the implementation of this algorithm, based on tricks
with Boolean operations:
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,m,cnt;
    while(cin>>m)
    {
        cnt=0;
        for ( int s = m ; ; s = ( s - 1 ) & m )
        {
            cnt++;
            if ( s == 0 )
            break ;
        }
        cout<<cnt<<endl;
    }
    return 0;
}


