#include <iostream>
using namespace std;


int main() {

    int arr[] = {1,1,1,0,1,1,0,1};
    int n = 6;

    int count = 0;
    int maxiCount = 0;

    for (int i=0; i<n; i++) {
        if( arr[i] == 1) {
            count ++;
        }

        else {
            count = 0;
        }

        maxiCount = max(maxiCount, count);

    }

    cout << maxiCount;

    return 0;
}