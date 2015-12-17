//list11.cpp

#include <iostream>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the insert() member function.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst(a, a+10);
    cout << "\nFor our starting list we have ...";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    list<int>::iterator pInsert = lst.begin();
    for (int i=1; i<=3; i++) ++pInsert;
    list<int>::iterator pReturn = lst.insert(pInsert, 17);
    cout << "\nNow we insert 17 at position 4 in the list."
        "\nThen for the list we have ...";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nAnd the value pointed to by the iterator\nreturned "
        "by this call to insert() is also " << *pReturn << ".";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    pInsert = lst.begin();
    for (int i=1; i<=8; i++) ++pInsert;
    lst.insert(pInsert, 5, 33);
    cout << "\nNext we insert 5 copies of 33 at the 9th position "
        "in the list.\nThen for our list we have ...";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    pInsert = lst.begin();
    for (int i=1; i<=10; i++) ++pInsert;
    lst.insert(pInsert, a+1, a+4);
    cout << "\nNext we insert the 2nd to 4th values from the array "
        "\nused to create our original list at position 11 in our list."
        "\nThen for lst we have ...";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress enter to continue ... ";  cin.ignore(80, '\n');

    pInsert = lst.begin();
    for (int i=1; i<=7; i++) ++pInsert;
    list<int>::iterator p1 = lst.begin();
    list<int>::iterator p2 = lst.begin();
    for (int i=1; i<=2; i++) ++p1;
    for (int i=1; i<=5; i++) ++p2;
    lst.insert(pInsert, p1, p2);
    cout << "\nFinally we insert 3rd to the 5th values from the list "
    "itself,\ninto the list at position 8."
        "\nThen for lst we have ...";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
