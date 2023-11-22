// Given an integer x, return true if x is a palindrome, and false otherwise.
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long rev = 0;
        int temp = x;
        while(temp){
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }
        return x == rev;
    }
};