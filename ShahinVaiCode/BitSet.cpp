// bitset::any
#include <iostream>
#include <bitset>
using namespace std;

int main ()
{
  bitset<16> mybits;

  cout << "enter a binary number: ";
  cin >> mybits;

  if (mybits.any())
    cout << "mybits has " << (int)mybits.count() << " bits set.\n";
  else cout << "mybits has no bits set.\n";

 // bitset<4> mybits (string("0001"));
/*Flip bits
The version with no parameters flips all the bits in the bitset, i.e. changes all 0s for 1s and all 1s for 0s.
The parameterized version, flips only the bit at position pos.*/
  cout << mybits.flip(2) << endl;     // 0101
  cout << mybits.flip() << endl;      // 1010

  if (mybits.none())
    cout << "mybits has no bits set.\n";
  else
    cout << "mybits has " << (int)mybits.count() << " bits set.\n";

mybits[1]=1;             // 0010
  mybits[2]=mybits[1];     // 0110

  cout << "mybits: " << mybits << endl;

  cout << mybits.reset(1) << endl;    // 1001
  cout << mybits.reset() << endl;    // 0000

  cout << mybits.set() << endl;       // 1111
  cout << mybits.set(2,0) << endl;    // 1011
  cout << mybits.set(2) << endl;      // 1111

 string mystring=mybits.to_string<char,char_traits<char>,allocator<char> >();

  cout << "mystring: " << mystring << endl;

  cout << mybits << " as an integer is: " << mybits.to_ulong() << endl;
  return 0;
}
