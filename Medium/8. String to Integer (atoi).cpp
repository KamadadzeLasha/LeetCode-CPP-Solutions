#include <climits>
#include <iostream>

class Solution {
public:

    int myAtoi(std::string s) {
        size_t i = 0;
        while (i < s.length() && isspace(s[i])) {
            i++;
        }

        int sign = 1;
        if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

    long long num = 0;
    while (i < s.length() && isdigit(s[i])) {
        num = num * 10 + (s[i] - '0');
        if (num * sign > INT_MAX || num * sign < INT_MIN) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }
        i++;
    }

    // Step 4: Apply sign
    num *= sign;

    return static_cast<int>(num);
}

};