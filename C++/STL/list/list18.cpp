//list18.cpp

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
    cout << "\nThis program illustrates the merge() member function "
        "for list objects.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a1[] = {1, 3, 5, 7, 9, 11, 13};
    list<int> lst1(a1, a1+7);
    int a2[] = {2, 4, 6, 8, 10, 16, 20, 22};
    list<int> lst2(a2, a2+8);

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

    cout << "\nNow we merge the second list with the first list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    lst1.merge(lst2);

    cout << "\nAfter the merge, for the first list we have:";
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

    cout << "\nNext we illustrate a merge in which the ordering of "
        "the integer values is\ndetermined by the criterion that one "
        "integer precedes another if and only\nif it has a smaller "
        "digit sum.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a3[] = {20, 12, 15, 61, 17, 19};
    list<int> lst3(a3, a3+6);
    int a4[] = {11, 23, 14, 81};
    list<int> lst4(a4, a4+4);

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

    cout << "\nNow we merge the second list with the first list.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
    lst3.merge(lst4, hasSmallerDigitSum);

    cout << "\nAfter the merge, for the first list we have:";
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
}
