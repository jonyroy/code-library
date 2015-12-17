//list19.cpp

#include <iostream>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the splice() member function "
        "for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFirst we illustrate the splicing of an entire second list "
        "into a first list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a1[] = {1, 1, 1, 1, 1, 1, 1};
    list<int> lst1(a1, a1+7);
    int a2[] = {2, 2, 2, 2, 2};
    list<int> lst2(a2, a2+5);

    cout << "\nFor the first list we have:";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst1.begin();
    while (p!= lst1.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFor the second list we have:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p!= lst2.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we splice the second list into the first list "
        "just before the third value.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    list<int>::iterator pSplicePoint = lst1.begin();
    for (int i=1; i<=2; i++) ++pSplicePoint;
    lst1.splice(pSplicePoint, lst2);

    cout << "\nAfter the splice, for the first list we have:";
    cout << "\nSize = " << lst1.size();
    cout << "\nContents: ";
    p = lst1.begin();
    while (p!= lst1.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nAnd for the second list we now have:";
    cout << "\nSize = " << lst2.size();
    cout << "\nContents: ";
    p = lst2.begin();
    while (p!= lst2.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNext we illustrate the splicing of a single value from "
        "a second list\ninto a first list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a3[] = {2, 1, 4, 3, 7, 6, 5};
    list<int> lst3(a3, a3+7);
    int a4[] = {25, 22, 29, 23, 21};
    list<int> lst4(a4, a4+5);

    cout << "\nFor the first list we have:";
    cout << "\nSize = " << lst3.size();
    cout << "\nContents: ";
    p = lst3.begin();
    while (p!= lst3.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFor the second list we have:";
    cout << "\nSize = " << lst4.size();
    cout << "\nContents: ";
    p = lst4.begin();
    while (p!= lst4.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we splice the 4th value from the second list into "
        "the first list\njust before the 6th value.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    pSplicePoint = lst3.begin();
    for (int i=1; i<=5; i++) ++pSplicePoint;
    list<int>::iterator pSpliceValue = lst4.begin();
    for (int i=1; i<=3; i++) ++pSpliceValue;
    lst3.splice(pSplicePoint, lst4, pSpliceValue);

    cout << "\nAfter the splice, for the first list we have:";
    cout << "\nSize = " << lst3.size();
    cout << "\nContents: ";
    p = lst3.begin();
    while (p!= lst3.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nAnd for the second list we now have:";
    cout << "\nSize = " << lst4.size();
    cout << "\nContents: ";
    p = lst4.begin();
    while (p!= lst4.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFinallly we illustrate the splicing of a range of values "
        "from a second list\ninto a first list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a5[] = {1, 2, 3, 4, 5, 6, 7};
    list<int> lst5(a5, a5+7);
    int a6[] = {21, 22, 23, 24, 25, 26, 27, 28};
    list<int> lst6(a6, a6+8);

    cout << "\nFor the first list we have:";
    cout << "\nSize = " << lst5.size();
    cout << "\nContents: ";
    p = lst5.begin();
    while (p!= lst5.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFor the second list we have:";
    cout << "\nSize = " << lst6.size();
    cout << "\nContents: ";
    p = lst6.begin();
    while (p!= lst6.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we splice the 3rd to 7th values from the second list "
        "into the first list\njust before the 5th value.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    pSplicePoint = lst5.begin();
    for (int i=1; i<=4; i++) ++pSplicePoint;
    list<int>::iterator pSpliceBegin = lst6.begin();
    for (int i=1; i<=2; i++) ++pSpliceBegin;
    list<int>::iterator pSpliceEnd = lst6.begin();
    for (int i=1; i<=7; i++) ++pSpliceEnd;
    lst5.splice(pSplicePoint, lst6, pSpliceBegin, pSpliceEnd);

    cout << "\nAfter the splice, for the first list we have:";
    cout << "\nSize = " << lst5.size();
    cout << "\nContents: ";
    p = lst5.begin();
    while (p!= lst5.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nAnd for the second list we now have:";
    cout << "\nSize = " << lst6.size();
    cout << "\nContents: ";
    p = lst6.begin();
    while (p!= lst6.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
