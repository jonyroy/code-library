//list03.cpp

#include <iostream>
#include <iomanip>
#include <string>
#include <list>
using namespace std;
struct BigThing
    {
        double first[10000];
        double second[10000000];
    };

int main()
{
    cout << "\nThis program illustrates the member function max_size() "
        "and shows how the\nmaximum size of a list depends on its "
        "component type.";
    cout << "\nPress Enter to continue ... ";  cin.ignore(80, '\n');

    cout << "\nHere are the maximum sizes of several lists "
        "of different component types:\n\n";

    list<int> lst1;
    list<double> lst2;
    list<bool> lst3;
    list<char> lst4;

    //Just something that takes up a lot of space

    list<BigThing> lst5;

    cout << "Maximum size of a list<int> ......."
        << setw(11) << lst1.max_size() << "\n"
        << "Maximum size of a list<double> ...."
        << setw(11) << lst2.max_size() << "\n"
        << "Maximum size of a list<bool> ......"
        << setw(11) << lst3.max_size() << "\n"
        << "Maximum size of a list<char> ......"
        << setw(11) << lst4.max_size() << "\n"
        << "Maximum size of a list<BigThing> .."
        << setw(11) << lst5.max_size() << "\n\n";
    cout << "Press Enter to continue ... ";  cin.ignore(80, '\n');
}
