//list10.cpp

#include <iostream>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates how one list can be "
        "assigned to another list\nof the same component type, "
        "using the assignment operator (=), and also\nillustrates "
        "the use of the assign() member function for assigning "
        "values\nto a list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFirst we demonstrate use of the assignment operator.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a1[] = {1, 2, 3, 4, 5};
    list<int> lst1(a1, a1+5);
    cout << "\nFor lst1 we have ...";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst1.begin();
    while (p != lst1.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a2[] = {1, 2, 3, 4, 5, 6, 7};
    list<int> lst2(a2, a2+7);
    cout << "\nFor lst2 we have ...";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a3[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    list<int> lst3(a3, a3+10);
    cout << "\nFor lst3 we have ...";
    cout << "\nSize = " << lst3.size();
    cout << "\nContents: ";
    p = lst3.begin();
    while (p != lst3.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2 = lst1;
    cout << "\nNow we assign lst1 to lst2 (lst2 = lst1). "
        "\nThen for lst2 we have ...";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst2 = lst3;
    cout << "\nNow we assign lst3 to lst2 (lst2 = lst3). "
        "\nThen for lst2 we have ...";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p != lst2.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we demonstrate use of the assign() member function.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a4[] = {2, 4, 6, 8};
    list<int> lst4(a4, a4+4);
    cout << "\nFor lst4 we have ...";
    cout << "\nSize = " << lst4.size();
    cout << "\nContents: ";
    p = lst4.begin();
    while (p != lst4.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst4.assign(3, 10);
    cout << "\nNow we perform lst4.assign(3, 10). "
        "\nThen for lst4 we have ...";
    cout << "\nSize = " << lst4.size();
    cout << "\nContents: ";
    p = lst4.begin();
    while (p != lst4.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    lst4.assign(6, 12);
    cout << "\nNow we perform lst4.assign(6, 12). "
        "\nThen for lst4 we have ...";
    cout << "\nSize = " << lst4.size();
    cout << "\nContents: ";
    p = lst4.begin();
    while (p != lst4.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a5[] = {1, 3, 5, 7, 9};
    list<int> lst5(a5, a5+5);
    cout << "\nFor lst5 we have ...";
    cout << "\nSize = " << lst5.size();
    cout << "\nContents: ";
    p = lst5.begin();
    while (p != lst5.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a6[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    list<int> lst6(a6, a6+10);
    cout << "\nFor lst6 we have ...";
    cout << "\nSize = " << lst6.size();
    cout << "\nContents: ";
    p = lst6.begin();
    while (p != lst6.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    list<int>::iterator p1 = lst6.begin();
    list<int>::iterator p2 = lst6.end();
    ++p1; ++p1;
    --p2; --p2; --p2; --p2;
    lst5.assign(p1, p2);
    cout << "\nNow we assign the 3rd to the 6th values of lst6 to lst5."
        "\nThen for lst5 we have ...";
    cout << "\nSize = " << lst5.size();
    cout << "\nContents: ";
    p = lst5.begin();
    while (p != lst5.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    p1 = lst6.begin();
    p2 = lst6.end();
    ++p1;;
    --p2; --p2; --p2;
    lst5.assign(p1, p2);
    cout << "\nNow we assign the 2nd to the 8th values of lst6 to lst5."
        "\nThen for lst5 we have ...";
    cout << "\nSize = " << lst5.size();
    cout << "\nContents: ";
    p = lst5.begin();
    while (p != lst5.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
