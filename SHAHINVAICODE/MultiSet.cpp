// multiset::begin/end
#include <iostream>
#include <set>

int main1 ()
{
  int myints[] = {42,71,71,71,12};
  std::multiset<int> mymultiset (myints,myints+5);

  std::multiset<int>::iterator it;

  std::cout << "mymultiset contains:";
  for (std::multiset<int>::iterator it=mymultiset.begin(); it!=mymultiset.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
int main2 ()
{
  std::multiset<int> mymultiset;
  std::multiset<int>::iterator it;

  // insert some values:
  mymultiset.insert (40);                            // 40
  for (int i=1; i<7; i++) mymultiset.insert(i*10);   // 10 20 30 40 40 50 60

  it=mymultiset.begin();
  it++;                                              //    ^

  mymultiset.erase (it);                             // 10 30 40 40 50 60

  mymultiset.erase (40);                             // 10 30 50 60

  it=mymultiset.find (50);
  mymultiset.erase ( it, mymultiset.end() );         // 10 30

  std::cout << "mymultiset contains:";
  for (it=mymultiset.begin(); it!=mymultiset.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
// multiset::count

int main3 ()
{
  int myints[]={10,73,12,22,73,73,12};
  std::multiset<int> mymultiset (myints,myints+7);

  std::cout << "73 appears " << mymultiset.count(73) << " times in mymultiset.\n";

  return 0;
}
// multiset::clear

int main4 ()
{
  std::multiset<int> mymultiset;

  mymultiset.insert (11);
  mymultiset.insert (42);
  mymultiset.insert (11);

  std::cout << "mymultiset contains:";
  for (std::multiset<int>::iterator it=mymultiset.begin(); it!=mymultiset.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  mymultiset.clear();
  mymultiset.insert (200);
  mymultiset.insert (100);

  std::cout << "mymultiset contains:";
  for (std::multiset<int>::iterator it=mymultiset.begin(); it!=mymultiset.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << '\n';

  return 0;
}
// swap multisets

int main5 ()
{
  int myints[]={19,72,4,36,20,20};
  std::multiset<int> first (myints,myints+3);     // 4,19,72
  std::multiset<int> second (myints+3,myints+6);  // 20,20,36

  first.swap(second);

  std::cout << "first contains:";
  for (std::multiset<int>::iterator it=first.begin(); it!=first.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  std::cout << "second contains:";
  for (std::multiset<int>::iterator it=second.begin(); it!=second.end(); ++it)
    std::cout << ' ' << *it;
  std::cout << '\n';

  return 0;
}
int main()
{

return 0;
}
