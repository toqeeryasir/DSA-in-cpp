#include <iostream>
using namespace std;

void printNumbers(int num) {
    if (num > 10)
        return;
    else {
        cout << num << " ";
        num++;
        printNumbers(num);
    }
}

int main() {
    printNumbers(1);
    return 0;
}
