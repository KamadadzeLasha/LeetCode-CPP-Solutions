/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.

Given a roman numeral, convert it to an integer.

*/

class Solution {
public:
    int romanToInt(string s) {
    int sum = 0;
    int n = s.size(); // Store the size of the string in a variable to avoid redundant calls
    char prev = ' '; // Initialize a previous character variable to keep track of previous roman numeral
    for(int i = 0; i < n; i++){
        char curr = s[i]; // Store the current character in a variable
        switch(curr){
            case 'I':
                if(i + 1 < n && (s[i + 1] == 'V' || s[i + 1] == 'X')){
                    sum -= 1;
                } else {
                    sum += 1;
                }
                break;
            case 'V':
                sum += 5;
                break;
            case 'X':
                if(i + 1 < n && (s[i + 1] == 'L' || s[i + 1] == 'C')){
                    sum -= 10;
                } else {
                    sum += 10;
                }
                break;
            case 'L':
                sum += 50;
                break;
            case 'C':
                if(i + 1 < n && (s[i + 1] == 'D' || s[i + 1] == 'M')){
                    sum -= 100;
                } else {
                    sum += 100;
                }
                break;
            case 'D':
                sum += 500;
                break;
            case 'M':
                sum += 1000;
                break;
        }
        prev = curr; // Update the previous character
    }
    return sum;
}
};