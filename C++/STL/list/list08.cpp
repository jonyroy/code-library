//list08.cpp

#include <iostream>
#include <list>
using namespace std;

int numberOfOddValues
(
    const list<int>& lst //in
);
/**<
Count the odd integers in a list of integers.
@return The number of odd integer values in the input list.
@param lst A list of integers.
@pre lst has been initialized.
@post No side effects.
*/

int main()
{
    cout << "\nThis program illustrates a typical use of a const "
        "iterator of the list class.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nHere are the contents of a list of size 12:\n";
    int a[] = {1, 4, 6, 8, 11, 13, 15, 16, 19, 20, 23, 25};
    list<int> lst(a, a+12);
    list<int>::iterator p = lst.begin();
    while (p != lst.end()) cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nThe number of odd values in the list is "
        << numberOfOddValues(lst) << ".\n";
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');
}


int numberOfOddValues
(
    const list<int>& lst //in
)
{
    int oddCount = 0;
    //Since lst is a "const" input parameter, you must use
    //a const_iterator inside the function to access lst. 
    list<int>::const_iterator p = lst.begin();
    while (p != lst.end())
    {
        if (*p % 2 == 1) ++oddCount;
        ++p;
    }
    return oddCount;
}
