// ==================================================
//        Left Rotate an array by 1
// ==================================================

// #include <iostream> 
// using namespace std;

// int main() {

//     int arr[] = {1,2,3,4,5};
//     int n = 5;

//     int temp = arr[0];

//     for(int i=1; i<n; i++)
//     {
//         arr[i-1] = arr[i];
//     }
//      arr[n-1] = temp;

//      for(int i=0; i<n; i++) {
//          cout << arr[i] << " ";

//      }
              
//     return 0;
// }


// ==================================================
//        Left Rotate an array by k
// ==================================================

// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = {1,2,3,4,5,6,7};
//     int n = 7;
//     int k = 3;

//     k = k % n;

//     int temp [k];

//     for(int i=0; i<k; i++) {
//         temp[i] = arr[i];
//     }


//     for (int i=k; i<n; i++) {
//         arr[i-k] = arr[i];
//     }

//     for(int i= n-k; i<n; i++) {
//         arr[i]= temp[i-(n-k)];
//     }

//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// ==================================================
//        Left Rotate an array by k
// ==================================================

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {

//     int arr[] = {1,2,3,4,5,6,7};
//     int n = 7;
//     int k = 3;

//     k = k % n;

//     reverse(arr, arr+k);
//     reverse(arr+k, arr+n);
//     reverse(arr, arr+n);

//     for(int i=0; i<n; i++) {
//         cout << arr[i] << " ";
//     }

//     return 0;
// }


// ==================================================
//       Right Rotate an array by K places
// ==================================================

// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {

//     int arr[] = {1,2,3,4,5,6,7};
//     int n = 7;
//     int k = 3;
    
//     k = k % n;

//     reverse(arr, arr+n);
//     reverse(arr, arr+k);
//     reverse(arr+k, arr+n);

//     for(int i=0; i<n; i++){
//         cout << arr[i]<<" ";
//     }

//     return 0;
// }