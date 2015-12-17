//list04.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{
    int size;
    cout << "\nEnter starting size for list: ";
    cin >> size;

    //Create the list
    list<int> lst(size);

    //Add values to back of list, one at a time.
    cout << "\nEnter number of values to add to back: ";
    int numberToAddToBack;
    cin >> numberToAddToBack;  cin.ignore(80, '\n');

    cout << "\nWe will now add the values 1 to " << numberToAddToBack
        << " to the back of the list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    for (int i=1; i<=numberToAddToBack; i++) lst.push_back(i);
    cout << "\nCurrent list size: " << lst.size();
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    //Add values to front of list, one at a time.
    cout << "\nEnter number of values to add to front: ";
    int numberToAddToFront;
    cin >> numberToAddToFront;  cin.ignore(80, '\n');

    cout << "\nWe will now add the values 1 to " << numberToAddToFront
        << " to the front of the list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    for (int i=1; i<=numberToAddToFront; i++) lst.push_front(i);
    cout << "\nCurrent list size: " << lst.size();
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nContents of the list: ";
    list<int>::iterator p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
