// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main () {

// int arr[] = {1,2,4,7,7,5};
// int n = 6;

// sort(arr, arr+n);

// int largest = arr[n-1];
// int Slargest = -1;

// cout << "Largest: " << largest << endl;

// for(int i=n-2; i>=0; i--) {
//     if (arr[i]!= largest) {
//         Slargest = arr[i];
//         break;
//     }
// }

// cout << "Slargest: " << Slargest;

//     return 0;
// }




// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main () {

// int arr[] = {1,2,4,7,7,5};
// int n = 6;

// int largest = arr[0];
// int Slargest = -1;

// for (int i=0; i<n; i++) {
//     if (arr[i] > largest)
//     largest = arr[i];
// }

// cout <<"largest: " << largest << endl;

// for(int i=0; i<n; i++) {
//     if(arr[i] > Slargest && arr[i]!= largest)
//     Slargest = arr[i];
// }

// cout << "Slargest: " << Slargest;

//     return 0;
// }



#include <iostream>
#include <algorithm>
using namespace std;

int main () {

int arr[] = {1,2,4,7,7,5};
int n = 6;

int largest = arr[0];
int Slargest = -1;

for (int i=0; i<n; i++) {
    if (arr[i] > largest)
    largest = arr[i];

    else if (arr[i] < largest && arr[i] > Slargest) {
    Slargest = arr[i];

}
}

cout <<"largest: " << largest << endl;
cout << "Slargest: " << Slargest;

    return 0;
}