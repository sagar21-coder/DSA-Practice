//Compare adjacent elements and swap if they are in the wrong order.

#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = { 12, 5, 8, 25, 6};
    int n = 5;

    for(int i= n-1; i >=1; i--) {

        for(int j=0; j < i; j++) {

            if(arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}