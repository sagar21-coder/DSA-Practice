// Find the no that appears once and rest others twice.

#include <iostream>
using namespace std;

int main() {

 int arr[] = {1,1,2,3,3};
 int n = 5;

 int uniqueNumber = 0;

 for(int i = 0; i < n; i++) {
   uniqueNumber = uniqueNumber ^ arr[i];
 }

 cout << uniqueNumber;

    return 0;
}