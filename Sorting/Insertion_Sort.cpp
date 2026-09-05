#include<bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = 6;

    for(int i=0; i<= n-1; i++) {

        int j = i;

        while(j > 0 && arr[j - 1] > arr[j]) {

            swap(arr[j-1], arr[j]);
            j--;
        }
    }   

    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
