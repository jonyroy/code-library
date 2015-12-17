// swap strings
#include <iostream>
#include <string>
using namespace std;

main ()
{
  string buyer ("money");
  string seller ("goods");

  cout << "Before swap, buyer has " << buyer;
  cout << " and seller has " << seller << endl;

  swap (buyer,seller);

  cout << " After swap, buyer has " << buyer;
  cout << " and seller has " << seller << endl;

  return 0;
}
