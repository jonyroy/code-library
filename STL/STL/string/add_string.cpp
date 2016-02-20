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
// adding strings
#include <iostream>
#include <string>
using namespace std;

main ()
{
  string firstlevel ("com");
  string secondlevel ("cplusplus");
  string scheme ("http://");
  string hostname;
  string url;

  hostname = "www." + secondlevel + '.' + firstlevel;
  url = scheme + hostname;

  cout << url << endl;

  return 0;
}
