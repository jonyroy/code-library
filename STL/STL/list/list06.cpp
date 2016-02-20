//list06.cpp

#include <iostream>
#include <iomanip>
#include <list>
using namespace std;

int main()
{
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    int a[] = {1, 2, 4, 8, 16, 32, 64};
    list<int> lst(a, a+7);

    list<int>::iterator p = lst.begin();
    cout << "\nHere are the values in our list:\n";
    while (p != lst.end()) cout << *p++ << " ";  cout << endl;
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    list<int>::iterator p1 = lst.begin(); //point at first component
    list<int>::iterator p2 = lst.end();   //point at one-past-the-last
    cout << "\np1 is set to point at the first component and "
        "p2 to one-past the last.\n";
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');

    if (p1 == p2)
        cout << "\np1 == p2, so *p1 == *p2 == " << *p1;
    else
        cout << "\np1 and p2 point to different list elements.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    struct Point{int x; int y;};
    Point location1 = {1, 2}, location2 = {4, 5};
    list<Point> lst2;
    lst2.push_back(location1);
    lst2.push_back(location2);
    list<Point>::iterator pp = lst2.begin();
    cout << "\nLocations (accessed with the -> operator): ";
    cout << "(" << pp->x << ", " << pp->y << ") ";
    ++pp;
    cout << "(" << pp->x << ", " << pp->y << ") ";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');
}
