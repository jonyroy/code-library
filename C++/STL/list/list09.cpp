//list09.cpp

#include <iostream>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the member functions "
        "front() and back().";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {2, 4, 6, 8, 10};
    list<int> lst(a, a+5);
    cout << "\nHere are the list contents:\n";
    list<int>::iterator p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";  cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nThe first value in the list is "
        << lst.front() << ".\n";
    cout << "The last value in the list is "
        << lst.back() << ".\n";
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');
}

