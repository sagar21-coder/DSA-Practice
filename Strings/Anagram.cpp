// #include <iostream>
// #include <algorithm>
// using namespace std;

// int main() {

//    string s = "listen";
//    string t = "silent";

//    sort(s.begin(), s.end());
//    sort(t.begin(), t.end());

//    if (s == t) {
//     cout << "Is an Anagram";
//    }

//    else {
//     cout << "Not an anagram";
//    }

//     return 0;
// }


#include <iostream>
#include <algorithm>
using namespace std;

int main() {

   string s = "listen";
   string t = "silent";

   if(s.length() != t.length()) {
    cout << "Not Anagram";
    return 0;
   }

   int freq[26] = {0};

   for(int i=0; i<s.length(); i++) {
    freq[s[i] - 'a']++;
    freq[t[i] - 'a']--;
   }

   for(int i=0; i<26; i++) {

    if(freq[i] != 0) {
        cout << "Not Anagram";
        return 0;
    }
   }

   cout << "Anagram";

    return 0;
}