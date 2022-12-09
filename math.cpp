#include <iostream>
using namespace std;
#include "Main.h"

int Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}

int main()
{
    PlusResult(2, 5);
    PlusResult(7, 9);
    PlusResult(11, 9);

    cout << Multiply(5, 8) << endl;
    cin.get();
}
