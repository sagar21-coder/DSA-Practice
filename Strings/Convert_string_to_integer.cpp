#include <iostream>
using namespace std;

int main() {

    string s = "   -042";

    int i = 0;

    while(i < s.size() && s[i] == ' '){
        i++;
    }

    int sign = 1; 
    if(i < s.size() && s[i] == '-') {
        sign = -1;
        i++;
    }

    else if(i < s.size() && s[i] == '+') {
        i++;
    }

    long long ans = 0;

    while(i < s.size() && s[i] >= '0' && s[i] <= '9') {
        int digit = s[i] - '0';

        if(ans > 214748364 ||
           (ans == 214748364 && digit > 7)) {

            if(sign == 1)
                ans = 2147483647;
            else
                ans = 2147483648LL;

            break;
        }

        ans = ans * 10 + digit;
        i++;
    }

    ans = ans * sign;

    cout << ans;

    return 0;
}