#include <iostream>
using namespace std;

int main() {

 int arr[] = {3,0,1};
 int n = 3;

 int xor1 = 0;
 int xor2 = 0;

 for(int i = 0; i < n; i++) {

    xor1 = xor1 ^ arr[i];
    xor2 = xor2 ^ (i+1);
 }

 cout << (xor1 ^ xor2);

    return 0;
}