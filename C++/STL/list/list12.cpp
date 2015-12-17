//list12.cpp

#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the use of member functions "
        "clear(),\nerase(), pop_back() and pop_front() for list "
        "objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst(a, a+10);
    cout << "\nFor our starting list list we have ...";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFirst, we delete the third component of the list, "
        "\nand then display the remaining values in the list.";
    list<int>::iterator pErase = lst.begin();
    for (int i=1; i<=2; i++) ++pErase;
    list<int>::iterator pReturn = lst.erase(pErase);
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    cout << "\nThe iterator returned by the above call to erase() "
        "points to " << *pReturn << ".\n";
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    list<int>::iterator eraseBegin = lst.begin();
    list<int>::iterator eraseEnd = lst.begin();
    for (int i=1; i<=2; i++) ++eraseBegin;
    for (int i=1; i<=7; i++) ++eraseEnd;
    cout << "\nNext, we delete the 3rd through 7th components of "
        "the list\nand then display the remaining values in the list.";
    pReturn = lst.erase(eraseBegin, eraseEnd);
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    cout << "\nThe iterator returned by the above call to erase() "
        "points to " << *eraseEnd << ".\n";
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we remove a value from the end of lst (using "
        "lst.pop_back()),\nand display again to confirm.";
    lst.pop_back();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nThen we remove a value from the front of lst (using "
        "lst.pop_front()),\nand display again to confirm.";
    lst.pop_front();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFinally, we clear the list and display once again "
        "to confirm:";
    lst.clear();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
