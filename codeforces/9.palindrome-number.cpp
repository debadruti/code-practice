/*
 * @lc app=leetcode id=9 lang=cpp
 *
 * [9] Palindrome Number
 */

// @lc code=start
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        stack<char> st;
        for(int i = 0; i < s.size(); i++){
            st.push(s[i]);
        }
        for(int i = 0; i < s.size(); i++){
            if(st.top() != s[i])
                return false;
            st.pop();
        }

        return true;
    }
};// @lc code=end

