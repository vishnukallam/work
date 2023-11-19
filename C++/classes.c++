#include <iostream>
using namespace std;
inline void printSum(int num1, int num2)
{

    cout << num1 + num2 << "\n";
}

int main()
{

    // call the inline function

    // first call

    printSum(10, 20);

    // second call

    printSum(2, 5);

    // third call

    printSum(100, 400);

    return 0;
}