//10.1st pattern matching algorithm.
#include<bits/stdc++.h>
using namespace std;
class PatternM
{
   string s;
   public:
   void input();
   int First_patern_matching(string);
};
void PatternM::input()
{
  cout<<"Enter Text.\n";
  getline(cin,s);
}
int PatternM::First_patern_matching(string str)
{
    int l,r;
    l=s.size();
    r=str.size();
    int k=1,MAX=l-r+1,i;
    while(k<=MAX)
    {
        for(i=0;i<r;i++)
        {
            if(str[i]!=s[k+i-1])
            {
                k++;
                break;
            }
        }
        if(r==i)
        {
            return k;
            break;
        }
    }
    if(r!=i)
    return -1;
}
int main()
{
   PatternM a;
   string str;
   a.input();
   cout<<"Enter Pattern=";
   getline(cin,str);
   int b=a.First_patern_matching(str);
   if(b<0)
   cout<<"Not Found";
   else
   cout<<"Found";
}
