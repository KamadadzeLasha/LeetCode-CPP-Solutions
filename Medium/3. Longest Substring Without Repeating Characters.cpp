/*
Given a string s, find the length of the longest substring without repeating characters.
*/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int ans = 0;
        int start = 0;
        unordered_set<char> seen;

        for (int i = 0; i < n; i++) {
            while (seen.count(s[i])) {
                seen.erase(s[start]);
                start++;
            }
            seen.insert(s[i]);
            ans = max(ans, i - start + 1);
        }

        return ans;
    }
};
