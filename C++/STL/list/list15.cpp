//list15.cpp

#include <iostream>
#include <string>
#include <list>
using namespace std;

bool isDivisibleByThree
(
    int n //in
)
/**<
Determine if an integer is divisible by 3.
@return true if the input integer is divisible by 3, and otherwise false.
@param n An integer.
@pre n contains an integer.
@post No side effects.
*/
{
    return (n%3 == 0);
}

int main()
{
    cout << "\nThis program illustrates the remove() and remove_if() "
        "\nmember functions for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {1, 2, 2, 3, 4, 5, 2, 6, 7, 8, 2, 2, 2, 9, 10, 11, 12};
    list<int> lst(a, a+17);
    cout << "\nFor the starting list we have:";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst.begin();
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we remove all copies of the value 2 and "
        "redisplay the list to confirm:";
    lst.remove(2);
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFinally we remove all values divisible by 3 and "
        "redisplay the list to confirm:";
    lst.remove_if(isDivisibleByThree);
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
