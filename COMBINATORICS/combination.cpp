#include <iostream>
using namespace std;

int a[] = {2,3,5,7,11,13,17,19,23,29,31};
int M = 10, N = 4;
const int MAX_M = 100;

int b[MAX_M];

void printResult()
{
    for (int i = 0; i < M; ++i)
        cout << b[i] << " ";
    cout << endl;
}


void fill(int index, int minPrimeIndex)
{
    for (int i = minPrimeIndex; i < N; ++i)
    {
        b[index] = a[i];
        if (index >= M - 1)
           printResult();
        else
           fill(index + 1, i);
    }
}

int main()
{
    while(cin>>M>>N)
    fill(0, 0);
    return 0;
}
