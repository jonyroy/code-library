#include <stdio.h>
#include <queue>

// use this to avoid specifying "std::" everywhere
using namespace std;

int main() {
  // just do this, write queue<the type you want,
  // in this case, integer> and the queue name
  queue<int> q;

  // try inserting 7 different integers, not ordered
  q.push(3); q.push(1); q.push(2);
  q.push(7); q.push(6); q.push(5);
  q.push(4);

  // the item that is inserted first will come out first
  // First In First Out (FIFO) order...
  while (!q.empty()) {
    // notice that this is not "top()" !!!
    printf("%d ",q.front());
	q.pop();
  }
 printf("\n");
 //...............................Priority Queue...
printf("\nPriority Queue Example.\n");
priority_queue<int> pq;
  for (int i=1;i<=10;i++)
  pq.push(i);

  while (!pq.empty())
  {
     int a= pq.top();
     pq.pop();
     printf("%d\n",a);
  }
 return 0;
 }
