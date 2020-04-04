/*
 * @lc app=leetcode id=11 lang=cpp
 *
 * [11] Container With Most Water
 *
 * https://leetcode.com/problems/container-with-most-water/description/
 *
 * algorithms
 * Medium (47.68%)
 * Likes:    5184
 * Dislikes: 539
 * Total Accepted:    580.5K
 * Total Submissions: 1.2M
 * Testcase Example:  '[1,8,6,2,5,4,8,3,7]'
 *
 * Given n non-negative integers a1, a2, ..., an , where each represents a
 * point at coordinate (i, ai). n vertical lines are drawn such that the two
 * endpoints of line i is at (i, ai) and (i, 0). Find two lines, which together
 * with x-axis forms a container, such that the container contains the most
 * water.
 * 
 * Note: You may not slant the container and n is at least 2.
 * 
 * 
 * 
 * 
 * 
 * The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In
 * this case, the max area of water (blue section) the container can contain is
 * 49. 
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input: [1,8,6,2,5,4,8,3,7]
 * Output: 49
 */

// @lc code=start
class Solution {
public:
    int maxArea1(std::vector<int>& height) {
        int len = height.size();
        int maxS = std::numeric_limits<int>::min();
        for (int width = len-1; width >= 1; width--) {
            for (int i = 0; i+width < len; i++) {
                int thisArea = area(height, i, width+i);
                if (thisArea > maxS) {
                    maxS = thisArea;
                }
            }
        }
        return maxS;
    }
    int maxArea(std::vector<int>& height) {
        auto res{0ul};
        auto leftPos{0ul};
        auto rightPos{height.size() - 1};
        while (leftPos < rightPos) {
            res = std::max(res, area(height, leftPos, rightPos));
            if (height[leftPos] < height[rightPos]) ++leftPos;
            else --rightPos;
        }
        return res;
    }
    unsigned long area(std::vector<int>& height, int start, int end) {
        return std::min(height[start], height[end]) * (end - start);
    }
};
// @lc code=end
