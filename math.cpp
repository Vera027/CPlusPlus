#include <iostream>
using namespace std;

void Log(const char* message);

int Multiply(int a, int b)
{
    Log("Multiply");
    return a * b;
}

int main()
{
    cout << Multiply(5, 8) << endl;
    cin.get();
}
