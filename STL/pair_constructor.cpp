#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <utility>
#include <algorithm>
#include <iostream>
#include <cstring>
#include <vector>
#include <cstring>
#include <cassert>
#include <ctime>
#include <stdbool.h>
using namespace std;

int main ()
{
  pair <string,double> product1;                     // default constructor
  pair <string,double> product2 ("tomatoes",2.30);   // value initialization
  pair <string,double> product3 (product2);          // copy constructor

  product1 = make_pair(string("lightbulbs"),0.99);   // using make_pair (move)

  product2.first = "shoes";                  // the type of first is string
  product2.second = 39.90;                   // the type of second is double

  cout << "The price of " << product1.first << " is $" << product1.second << '\n';
  cout << "The price of " << product2.first << " is $" << product2.second << '\n';
  cout << "The price of " << product3.first << " is $" << product3.second << '\n';
  return 0;
}
