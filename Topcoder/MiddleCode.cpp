#include<bits/stdc++.h>
using namespace std;
class MiddleCode {
	public:
	string encode(string s) {
	    string str;
	    while(s.size())
        {
              int n=s.size();
              if(n%2)
              {
                 str+=s[n/2];
                 s.erase(n/2,1);
              }
              else
              {
                  int m=n/2;
                  if(s[m]>s[m-1])
                  {
                       str+=s[m-1];
                       s.erase(m-1,1);
                  }
                  else
                  {
                      str+=s[m];
                       s.erase(m,1);
                  }
              }
        }
        return str;

	}
};


// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor
