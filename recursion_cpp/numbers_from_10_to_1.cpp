#include <iostream>
using namespace std;

void printNumbers(int num) {
    if (num > 10)
        return;
    else {
        num++;
        printNumbers(num);
        cout << num << " ";
    }
}

int main() {
    printNumbers(1);
    return 0;
}
