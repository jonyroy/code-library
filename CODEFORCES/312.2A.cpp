#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    if(a.first>b.first)
        return true;
    else
        return false;
}
int main()
{
    vector<pair<int,int> >positive,negative,neg,pos;
    int n,sum=0,sum1=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int x,xi;
        cin>>x>>xi;
        if(x<0)
        negative.push_back(make_pair(x,xi));
        else
        positive.push_back(make_pair(x,xi));
    }
    sort(negative.begin(),negative.end(),comp);
    sort(positive.begin(),positive.end());
    neg=negative;
    pos=positive;
    int i=1;
    while(1)
    {
        if(negative.size()&&(1&i))
        {
            sum+=negative[0].second;
            negative.erase(negative.begin());
        }
        else if(negative.size()==0&&(1&i))
            break;
        else if(positive.size()==0)
            break;
        else{
            sum+=positive[0].second;
             positive.erase(positive.begin());
        }
            i++;
    }
    i=1;
    while(1)
    {
        if(pos.size()&&(1&i))
        {
            sum1+=pos[0].second;
            pos.erase(pos.begin());
        }
        else if(pos.size()==0&&(1&i))
            break;
        else if(neg.size()==0)
            break;
        else{
            sum1+=neg[0].second;
             neg.erase(neg.begin());
        }
            i++;
    }
    cout<<max(sum,sum1);
    return 0;
}

