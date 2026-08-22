#include <iostream>
using namespace std;

int main () {

    int arr[] = {1,3,5,7,10};
    int n = 5;

    for(int i=1; i<n; i++) {

        if(arr[i] < arr[i-1]) {
            cout << "Array is not Sorted";
            return 0;
        }
    }

    cout << "Array is Sorted";

    return 0;
}