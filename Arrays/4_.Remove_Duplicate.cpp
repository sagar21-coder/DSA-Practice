// #include <iostream>
// #include <set>
// using namespace std;

// int main () {

//     int arr[] = {1,1,2,2,2,3,3};
//     int n = 7;

//     set<int> st;

//     for(int i=0; i<n; i++) {
//         st.insert(arr[i]);
//     }

//     for(int x : st) {
//         cout << x << " ";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main() {

int arr[] = {1,1,2,2,2,3,3};
int n = 7;

int i = 0;

for(int j=1; j<n; j++) {

    if(arr[j]!= arr[i]) {
    arr[i+1] = arr[j];
    i++;

    }
}

cout << "Number of unique elements: " <<  i+1 << endl; 

for(int k=0; k<i+1; k++) {
    cout << arr[k] << " ";
}

    return 0;
}