#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sum(int num){

    if(num >= 0 && num <= 9) {
        return num;
    }
    else{
       return (num % 10) + sum(num / 10);
    }
}

int main() {
    cout<<sum(1234)<<endl;
    return 0;
}