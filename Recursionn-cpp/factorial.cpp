#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int factorial(int e) {
    if (e == 1)
        return 1;
    else
        return e * factorial(e - 1);
}

int main() {
    int result = factorial(5);
    cout << "Factorial of the given number is: " << result << endl;
    return 0;
}
