//list07.cpp

#include <iostream>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates reverse iterators of the "
        "list class,\nas well as member functions rbegin() and "
        "rend().";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nHere are the contents of a list of size 12:\n";
    int a[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24};
    list<int> lst(a, a+12);
    list<int>::iterator p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow using a reverse iterator to display\n"
        "the list components in reverse order:\n";
    list<int>::reverse_iterator r_p = lst.rbegin();
    while (r_p != lst.rend()) cout << *r_p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow using a reverse iterator to display\n"
        "the list components in forward order:\n";
    r_p = lst.rend();
    while (r_p != lst.rbegin()) cout << *--r_p << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow constructing a new list containing the "
        "values from the first list\nin reverse order, and "
        "then displaying the values from this new list.\n";
    list<int> lst1(lst.rbegin(), lst.rend());
    p = lst1.begin();
    while (p != lst1.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}

