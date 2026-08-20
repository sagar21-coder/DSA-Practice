// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {
//     int arr[] = {3,2,1,5,2};
//     int n = 5;

//     sort(arr, arr+n);

//     cout << "Largest element: " << arr[n-1];

//     return 0;
    
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {

int arr[] = {3,2,1,5,2};
int n = 5;

int largest = arr[0];

for (int i=0; i<n; i++) {
    if(arr[i] > largest)
    largest = arr[i];
}

cout << "largest element: " << largest;

return 0;
}