//list16.cpp

#include <iostream>
#include <list>
using namespace std;

bool bothDivisibleByThree
(
    int m, //in
    int n  //in
)
/**<
Determine if two integers are both divisible by 3.
@return true if both input integers are divisible by 3, and
otherwise false.
@param m An integer.
@param n An integer.
@pre m and n both contain an integer.
@post Returns 
*/
{
    return (m%3 == 0) && (n%3 == 0);
}

int main()
{
    cout << "\nThis program illustrates the unique() "
        "member function for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {1, 2, 2, 3, 6, 5, 2, 6, 9, 12, 2, 2, 2, 9, 10, 11, 12};
    list<int> lst(a, a+17);
    cout << "\nFor the starting list we have:";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst.begin();
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we remove all adjacent duplicate copies of "
        "\nthe value 2 and redisplay the list to confirm:";
    lst.unique();
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFinally we remove all adjacent duplicate values "
        "\ndivisible by 3 and redisplay the list to confirm:";
    lst.unique(bothDivisibleByThree);
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
