// #include <iostream>
// using namespace std;

// int main() {

//     string s = "Hello";

//     int left = 0;
//     int right = s.length() - 1;

//     while(left < right) {

//         swap(s[left], s[right]);

//         left++;
//         right--;
//     }

//     cout << s;

//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {

//     string s = " hello";

//     reverse(s.begin(), s.end());
//     cout << s;


//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    string s = "hello";
    string temp = "";

    for(int i = s.length() - 1; i >=0; i--) {
        temp = temp + s[i];
    }
    
     cout << temp;

    return 0;
}