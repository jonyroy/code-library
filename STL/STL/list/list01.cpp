//list01.cpp

#include <iostream>
#include <string>
#include <list>
#include<cstring>
#include<cctype>
using namespace std;

int main()
{
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    //Create an empty list
    list<int> lst1;
    cout << "\nContents of lst1: ";
    list<int>::iterator p_i = lst1.begin();
    while (p_i != lst1.end()) cout << *p_i++ << " ";
    cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    //Create a list filled with the default component-type value
    list<int> lst2(5);
    cout << "\nContents of lst2: ";
    p_i = lst2.begin();
    while (p_i != lst2.end()) cout << *p_i++ << " ";
    cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    //Create a list filled with a specific component-type value
    list<double> lst3(4, 3.14);
    cout << "\nContents of lst3: ";
    list<double>::iterator p_d = lst3.begin();
    while (p_d != lst3.end()) cout << *p_d++ << " ";
    cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    //Create a list using pointers to an integer array
    int a[] = {2, 4, 6, 8, 10, 12};
    list<int> lst4(a, a + sizeof(a)/sizeof(int));
    cout << "\nContents of lst4: ";
    p_i = lst4.begin();
    while (p_i != lst4.end()) cout << *p_i++ << " ";
    cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    //Create a list using pointers to a C-string
    char s[] = "Hello";
    list<char> lst5(s, s + strlen(s));
    cout << "\nContents of lst5: ";
    list<char>::iterator p_c = lst5.begin();
    while (p_c != lst5.end()) cout << *p_c++ << " ";
    cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    //Create a new list as a copy of an existing list
    list<double> lst6(lst3); //or list<double> lst6 = d3;
    cout << "\nContents of lst6 same as those of lst3: ";
    p_d = lst6.begin();
    while (p_d != lst6.end()) cout << *p_d++ << " ";
    cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');
}
