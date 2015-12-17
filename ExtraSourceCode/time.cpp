 #include <ctime>
  #include <cstdio>
  #include<iostream>
  using namespace std;
  int main(int argc, char** argv)
  {
  clock_t start;
  double diff;
  start = clock();
  //diff = ( clock() - start ) / (double)CLOCKS_PER_SEC;
  cout<<"printf: "<<start<<'\n';
  return 0;
  }

