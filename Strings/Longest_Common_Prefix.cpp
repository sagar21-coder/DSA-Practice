#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> s = {"flower", "flow", "flight"};

    string prefix = s[0];

    for(int i=1; i<s.size(); i++) {

        int j = 0;

        while(j < prefix.size() && j < s[i].size() && prefix[j] == s[i][j]) {
            j++;
        }

        prefix = prefix.substr(0, j);

        if(prefix.empty()) {
            break;
        }

    }

    cout << prefix;
    return 0;
}