//list02.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    cout << "\nThis program illustrates the list member functions "
        "empty() and size().";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    //Create an empty list
    list<int> lst1;
    cout << "\nSize of lst1: " << lst1.size();
    if (lst1.empty())
        cout << "\nThe list lst1 is empty.\n";
    else
    {
        cout << "\nContents of lst1: ";
        list<int>::iterator p_i = lst1.begin();
        while (p_i != lst1.end()) cout << *p_i++ << " ";
        cout << endl;
    }
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    //Create a list using pointers to an integer array
    int a[] = {2, 4, 6, 8, 10, 12};
    list<int> lst2(a, a + sizeof(a)/sizeof(int));
    cout << "\nSize of lst2: " << lst2.size();
    if (lst2.empty())
        cout << "\nThe list lst2 is empty.\n";
    else
    {
        cout << "\nContents of lst2: ";
        list<int>::iterator p_i = lst2.begin();
        p_i = lst2.begin();
        while (p_i != lst2.end()) cout << *p_i++ << " ";
        cout << endl;
    }
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');
}
