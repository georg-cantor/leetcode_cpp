/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (38.09%)
 * Likes:    4216
 * Dislikes: 198
 * Total Accepted:    871K
 * Total Submissions: 2.3M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    bool isValid(std::string s) {
        std::vector<char> parenStack{};
        for (auto ch: s) {
            if (isLeft(ch)) {
                parenStack.push_back(ch);
            } else if (isRight(ch) && (!parenStack.empty()) && isMatch(parenStack.back(), ch)) {
                parenStack.pop_back();
            } else {
                return false;
            }
        }
        if (parenStack.size() == 0) {
            return true;
        }
        return false;
    }

private:
    bool isLeft(char ch) {
        if (ch == '(' || ch == '[' || ch == '{') {
            return true;
        }
        return false;
    }

    bool isRight(char ch) {
        if (ch == ')' || ch == ']' || ch == '}') {
            return true;
        }
        return false;
    }

    bool isMatch(char ch1, char ch2) {
        return (ch1 == '(' && ch2 == ')') || (ch1 == '[' && ch2 == ']') || (ch1 == '{' && ch2 == '}');
    }
};
// @lc code=end
