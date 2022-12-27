#include <iostream>
using namespace std;

int Plus(int a, int b){
    return a + b;
}

void PlusResult(int a, int b)
{
    int result1 = Plus(a , b);
    cout << result1 << endl;
}
