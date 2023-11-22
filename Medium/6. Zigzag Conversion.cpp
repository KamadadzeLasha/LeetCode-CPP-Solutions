/*
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P   A   H   N
A P L S I I G
Y   I   R
And then read line by line: "PAHNAPLSIIGYIR"

Write the code that will take a string and make this conversion given a number of rows:

string convert(string s, int numRows);
*/
class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length() <= 1 || numRows == 1){
            return s;
        }
        vector<string> emptyStrings(numRows, "");
        int j = 0, dir = -1;
        for(int i = 0; i < s.length(); i++){
            emptyStrings[j] += s[i];
            if(j == 0 || j == numRows - 1){
                dir *= -1;
            }
            j += dir;
        }
        string result = "";
        for(int i = 0; i < numRows; i++){
            result += emptyStrings[i];
        }
        return result;

    }
};