// vector::push_back
#include <iostream>
#include <vector>
#include<cstdio>
#include<string>
using namespace std;
int main ()
{
  vector<char> m,p;
  int myint,n;
  char ch;
  printf("Enter Some value:\n");
  while(scanf("%c",&ch)!=EOF)
  {
     p.push_back(ch);
  }
  myint=p.size();
  printf("You Have Entered %d Value.\n\n",myint);
  printf("This Values are ............\n\n");
  for(int i=0;i<myint;i++)
  printf("%c ",p[i]);
  return 0;
}
