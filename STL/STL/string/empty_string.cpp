// string::empty
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string content;
  string line;
  cout << "Please introduce a text. Enter an empty line to finish:\n";
  do {
    getline(cin,line);
    content += line + '\n';
  } while (!line.empty());
  cout << "The text you introduced was:\n" << content;
  return 0;
}
