#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a[7] = {23, 1, 33, -20, 6, 6, 9};
    sort(a, a+7);
    for (int i=0; i<7; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
