#include <bits/stdc++.h>
using namespace std;

int main() {

    string s = "tree";

    unordered_map<char, int> freq;

    for (char ch : s) {
        freq[ch]++;
    }

    vector<pair<char, int>> arr;

    for (auto x : freq) {
        arr.push_back({x.first, x.second});
    }

    sort(arr.begin(), arr.end(), [](auto &a, auto &b) {
        return a.second > b.second;
    });

    string ans;

    for (auto x : arr) {
        ans.append(x.second, x.first);
    }

    cout << "Sorted string: " << ans << endl;

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//     string s = "tree";

//     unordered_map<char, int> freq;

//     for(char ch : s) {
//         freq[ch]++;
//     }

//     vector<vector<char>> bucket(s.size() + 1);

//     for (auto x : freq) {
//         bucket[x.second].push_back(x.first);
//     }

//     string ans;

//     for(int i = s.size(); i >= 1; i--) {

//         for (char ch : bucket[i]) {

//             for (int j=0; j<i; j++) {
//                 ans = ans + ch;
//             }
//         }
//     }

//     cout << "Sorted String: " << ans << endl;

//     return 0;
// }