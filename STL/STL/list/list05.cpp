//list05.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;

int main()
{


    list<int> lst1(8);

    cout << "\nFirst we enter some integer squares into "
        "a list of size 8, and then display: \n";
    //Create and initialize an iterator.
    list<int>::iterator p = lst1.begin();
    int i = 0;
    while(p != lst1.end())
    {
        *p = i*i; //Assign i*i to list lst via iterator p.
        p++;      //Advance the iterator **after** using it.
        i++;      //Increment the value to be squared.
    }
    p = lst1.begin();
    while(p != lst1.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNext we double the values in the list and "
        "re-display (backwards this time): \n";
    p = lst1.begin();
    while(p != lst1.end())
    {
        *p = *p * 2;
        p++;
    }
    //This time, initialize the iterator to lst1.end().
    //And decrement the iterator **before** using it!
    p = lst1.end();
    while(p != lst1.begin()) cout << *--p << " "; //Note *--p "idiom".
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
