/*
 * @lc app=leetcode id=125 lang=cpp
 *
 * [125] Valid Palindrome
 *
 * https://leetcode.com/problems/valid-palindrome/description/
 *
 * algorithms
 * Easy (34.15%)
 * Likes:    935
 * Dislikes: 2555
 * Total Accepted:    501.1K
 * Total Submissions: 1.5M
 * Testcase Example:  '"A man, a plan, a canal: Panama"'
 *
 * Given a string, determine if it is a palindrome, considering only
 * alphanumeric characters and ignoring cases.
 * 
 * Note: For the purpose of this problem, we define empty string as valid
 * palindrome.
 * 
 * Example 1:
 * 
 * 
 * Input: "A man, a plan, a canal: Panama"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "race a car"
 * Output: false
 * 
 * 
 */

// @lc code=start
#include <cctype>
class Solution {
public:
    bool isPalindrome(std::string s) {
        if (s.size() == 0) return true;
        int i = 0;
        int j = s.size() - 1;
        while (i <= j) {
            if (my_isalnum(s.at(i)) && my_isalnum(s.at(j))) {
                if (my_isalpha(s.at(i)) && my_isalpha(s.at(j))
                    && (my_tolower(s.at(i)) == my_tolower(s.at(j)))) {
                    i++;
                    j--;
                } else if (my_isdigit(s.at(i)) && my_isdigit(s.at(j))
                            && (s.at(i) == s.at(j))) {
                    i++;
                    j--;
                } else {
                    return false;
                }
            }
            else if (!my_isalnum(s.at(i))) {
                i++;
            } else {
                j--;
            }

        }
        return true;
    }
private:
    bool my_isalnum(char ch)
    {
        return std::isalnum(static_cast<unsigned char>(ch));
    }
    char my_tolower(char ch)
    {
        return static_cast<char>(std::tolower(static_cast<unsigned char>(ch)));
    }
    bool my_isdigit(char ch)
    {
        return std::isdigit(static_cast<unsigned char>(ch));
    }
    bool my_isalpha(char ch)
    {
        return std::isalpha(static_cast<unsigned char>(ch));
    }
};
// @lc code=end
