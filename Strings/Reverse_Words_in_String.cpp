// #include <iostream>
// #include <algorithm>
// #include <vector>
// #include <sstream>
// using namespace std;

// int main () {

//     string s = "the sky is blue";

//     stringstream ss(s);
//     vector<string> words;

//     string word;

//     while(ss >> word) {
//         words.push_back(word);
//     }

//     for(int i = words.size()-1; i>=0; i--) {
//         cout << words[i] << " ";
//     }

//     return 0;
// }



#include <iostream>
#include <algorithm>

using namespace std;

int main () {

   string s = "the sky is blue";

   reverse(s.begin(), s.end());

   int start = 0;

   for(int i = 0; i <= s.length(); i++) {

    if(i == s.length() || s[i] == ' ') {

        reverse(s.begin()+start, s.begin()+i);

        start = i + 1;
    }
   }

   cout << s;

    return 0;
}c