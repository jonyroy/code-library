#include<bits/stdc++.h>
using namespace std;
class FoxAndWord {
	public:
	int howManyPairs(vector <string> words)
	{
	    int cnt=0;
	  map<string,int>m,b;
	  for(int i=0;i<words.size();i++)
        m[words[i]]=1;
      for(int i=0;i<words.size();i++)
      {
          int jo=words[i].size();
          int h[500]={0},cn=0;
          string jony=words[i];
          for(int t=0;t<jo;t++)
            {
            int c=jony[t];
            h[c]++;
            }
          for(int t=97;t<=122;t++)
            if(h[t])
            cn++;
          if(cn==1)
            continue;
          for(int j=1;j<jo;j++)
          {
              string s=words[i].substr(0,j);
              string ss=words[i].substr(j,jo-j);
              string k=words[i]+ss+s,l=ss+s+words[i];
              if(ss+s==words[i])
                continue;
              if(m[ss+s]==1&&b[k]==0&&b[l]==0)
              {
                cnt++;
                b[k]=1,b[l]=1;
                cout<<k<<endl<<l<<endl;
              }

          }
      }
      return cnt;
	}
};
