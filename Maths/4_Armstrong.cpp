#include <iostream>
using namespace std;

int main() {

    int n = 153;

    int original = n;
    int sum = 0;

    while (n > 0) {

        int digit = n % 10;

        sum = sum + digit * digit * digit;

        n = n / 10;
    }

    if (sum == original) {
        cout << "Armstrong Number";
    }

    else {
        cout << "Not an Armstrong Number";
    }

    return 0;
}