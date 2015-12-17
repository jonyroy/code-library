#include <iostream>
#include <fstream>
using namespace std;
int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  string s;
  getline(cin,s);
  myfile<<s;
  //myfile << "Writing this to a file.\n";
  myfile.close();
  return 0;
}
