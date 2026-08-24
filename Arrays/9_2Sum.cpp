// #include <iostream>
// using namespace std;

// int main() {

//     int arr[] = {2,6,5,8,11};
//     int n = 5;
//     int target = 14;

//     for (int i=0; i<n; i++) {
//         for (int j=i+1; j<n; j++) {

//             if (arr[i] + arr[j] == target) {
//                 cout << i << " " << j;
//                 return 0;
//             }
//         }
//     }

//     cout << "Pair not found";

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {

//     int arr[] = {2,6,5,8,11};
//     int n = 5;
//     int target = 14;

//     sort(arr, arr+n);

//     int left = 0;
//     int right = n-1;

//     while (left < right) {

//         int sum = arr[left] + arr[right];

//         if(sum == target) {
//             cout << arr[left] << " " << arr[right];
//             return 0;
//         }

//         else if (sum < target ) {
//             left++;
//         }

//         else {
//             right --;
//         }
//     }

//     cout << "No pair found";

//     return 0;
// }


#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int arr[] = {2,6,5,8,11};
    int n = 6;
    int target = 14;

    unordered_map<int, int> mp;

    for(int i=0; i<n; i++) {

        int remaining = target - arr[i];

        if(mp.find(remaining)!=mp.end()) {
            cout << mp[remaining] << " " << i;
            return 0;
        }

        mp[arr[i]] = i;
    }

    cout << "No pair found";

    return 0;
}