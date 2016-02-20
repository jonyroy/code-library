// constructing queues
#include <iostream>
#include <deque>
#include <list>
#include <queue>
using namespace std;
int main ()
{
  deque<int> mydeck (3,100);   // deque with 3 elements
  list<int> mylist (2,200);    // list with 2 elements
  queue<int> first;            // empty queue
  queue<int> second (mydeck);  // queue initialized to copy of deque
  queue<int,list<int> > third; // empty queue with list as underlying container
  queue<int,list<int> > fourth (mylist);
  cout << "size of first: " << (int) first.size() << endl;
  cout << "size of second: " << (int) second.size() << endl;
  cout << "size of third: " << (int) third.size() << endl;
  cout << "size of fourth: " << (int) fourth.size() << endl;
  return 0;
}
