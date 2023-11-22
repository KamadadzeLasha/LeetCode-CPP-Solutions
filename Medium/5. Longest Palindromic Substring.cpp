// Given a string s, return the longest palindromic substring in s.
class Solution {
public:
    string longestPalindrome(string s) {
        if (s.length() <= 1){
            return s;
        }
        string longest = s.substr(0, 1);
        for (int i = 0; i < s.length(); i++){
            string odd = getPalindrome(s, i, i);
            string even = getPalindrome(s, i, i + 1);
            if (odd.length() > longest.length()){
                longest = odd;
            }
            if (even.length() > longest.length()){
                longest = even;
            }
        }
        return longest;
    }
    
    string getPalindrome(string s, int start, int end){
        while (start >= 0 && end < s.length() && s[start] == s[end]){
            start--;
            end++;
        }
        return s.substr(start + 1, end - start - 1);
    }
};
