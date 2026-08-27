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



#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    string s = "madam";
    
    int left = 0;
    int right = s.length()-1;

    while(left < right) {

        if(s[left] != s[right]) {
            cout << "String is not an palindrome";
            return 0;
        }

        left ++;
        right -- ;
    }

    cout << "String is Palindrome";

    return 0;
}

