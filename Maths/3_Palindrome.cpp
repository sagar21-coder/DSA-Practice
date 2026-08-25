#include <iostream>
using namespace std;

int main () {

int n = 12321;
int original = n;
int reverse = 0;

while (n>0) {

    int lastDigit = n % 10;
    reverse = reverse * 10 + lastDigit;
    n = n / 10;
}
 
if (original == reverse) {
    cout << "Palindrome";
}
else {
    cout << "Not Palindrome";
}

    return 0;
}