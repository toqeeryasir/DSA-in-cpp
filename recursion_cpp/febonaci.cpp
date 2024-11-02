#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void febonaci(int e){
    if(e == 0 or e == 1)
        return e;
    else{
        int fib;
        fib = febonaci(e-1) + febonaci(e -2 );
        cout<<fib;
    }
}

int main() {
    febonaci(8);
    return 0;
}