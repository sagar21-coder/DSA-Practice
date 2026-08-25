#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {

int arr[] = {-1,0,1,2,-1,-4};
int n = 6;

set<vector<int>> st;

for(int i=0; i<n; i++) {
    for(int j=i+1; j<n; j++) {
        for(int k=j+1; k<n; k++) {

            if(arr[i] + arr[j] + arr[k] == 0) {
               vector<int> temp = {arr[i], arr[j], arr[k]};

               sort(temp.begin(), temp.end());

               st.insert(temp);              
            }
        }
    }
}

for(auto triplet : st) {

    cout << "[ ";

    for(int x: triplet) {
        cout << x << " ";
    }

    cout << "] ";
}

    return 0;
}