/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

class Solution {
public:
    int reverse(int x) {
        long solution = 0;
        while(x){
            solution = solution * 10 + x % 10;
            x /= 10;
        }
        if(solution > INT_MAX || solution < INT_MIN){
            return 0;
        }
        return (int)solution;
    }
};