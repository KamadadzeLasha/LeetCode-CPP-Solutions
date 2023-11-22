/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

    for (char ch : s) {
        switch (ch) {
            case '(':
            case '[':
            case '{':

                stack.push(ch);
                break;

            case ')':
                if (stack.empty() || stack.top() != '(') {
                    return false;
                }
                stack.pop();
                break;

            case ']':
                if (stack.empty() || stack.top() != '[') {
                    return false;
                }
                stack.pop();
                break;

            case '}':
                if (stack.empty() || stack.top() != '{') {
                    return false;
                }
                stack.pop();
                break;

            default:
             
                break;
        }
    }

    return stack.empty();
}

        
    
};