// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// int main() {

//     string s = "madam";
//     string r = s;
    
//     reverse(r.begin(), r.end());

//     if (s == r) {
//         cout << " String is Palindrome";
//     }

//     else {
//         cout << "String is not an Palindrome";
//     }

//     return 0;
// }



// #include <iostream>
// #include <algorithm>
// #include <string>
// using namespace std;

// int main() {

//     string s = "madam";
    
//     int left = 0;
//     int right = s.length()-1;

//     while(left < right) {

//         if(s[left] != s[right]) {
//             cout << "String is not an palindrome";
//             return 0;
//         }

//         left ++;
//         right -- ;
//     }

//     cout << "String is Palindrome";

//     return 0;
// }



#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string s = "A man, a plan, a canal: Panama";
    
    int left = 0;
    int right = s.length()-1;

    while(left < right) {

        while(left < right && !isalnum (s[left])) {
            left++;
        }
        while(left < right && !isalnum (s[right])) {
            right--;
        }

        if(tolower(s[left]) != tolower(s[right])) {
            cout << "String is not an palindrome";
            return 0;
        }

        left ++;
        right -- ;
    }

    cout << "String is Palindrome";

    return 0;
}
