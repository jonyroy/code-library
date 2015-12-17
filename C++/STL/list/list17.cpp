//list17.cpp

#include <iostream>
#include <list>
using namespace std;

bool hasSmallerDigitSum
(
    int i1, //in
    int i2  //in
)
/**<
Test if one integer has a smaller digit sum than another.
@return true if sum of the digits in i1 is < sum of digits
in i2, and otherwise returns false.
@param i1 An integer.
@param i2 An integer.
@pre i1 and i2 have been initialized and i1, i2 are both > 0.
@post No side effects. 
*/
{
    int digitSum1 = 0;
    while (i1 != 0)
    {
        digitSum1 += i1 % 10;
        i1 /= 10;
    }

    int digitSum2 = 0;
    while (i2 != 0)
    {
        digitSum2 += i2 % 10;
        i2 /= 10;
    }
    return digitSum1 < digitSum2;
}

int main()
{
    cout << "\nThis program illustrates the reverse() and sort()"
        "\nmember functions for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {17, 12, 14, 19, 23, 15, 61, 20, 81, 11};
    list<int> lst(a, a+10);
    cout << "\nFor the starting list we have:";
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    list<int>::iterator p = lst.begin();
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNow we sort the list in ascending order:";
    lst.sort();
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nNext we reverse the list, which will give the values "
        "in descending order:";
    lst.reverse();
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nFinally we sort the list according to the criterion "
        "that one value\ncomes before another if and only if it has "
        "a smaller digit sum:";
    lst.sort(hasSmallerDigitSum);
    p = lst.begin();
    cout << "\nSize = " << lst.size();
    cout << "\nContents: ";
    while (p!= lst.end())  cout << *p++ << " ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
