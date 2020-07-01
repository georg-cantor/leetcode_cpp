/*
 * @lc app=leetcode id=212 lang=cpp
 *
 * [212] Word Search II
 *
 * https://leetcode.com/problems/word-search-ii/description/
 *
 * algorithms
 * Hard (32.75%)
 * Likes:    2331
 * Dislikes: 105
 * Total Accepted:    198K
 * Total Submissions: 588.2K
 * Testcase Example:  '[["o","a","a","n"],["e","t","a","e"],["i","h","k","r"],["i","f","l","v"]]\n' +
  '["oath","pea","eat","rain"]'
 *
 * Given a 2D board and a list of words from the dictionary, find all words in
 * the board.
 * 
 * Each word must be constructed from letters of sequentially adjacent cell,
 * where "adjacent" cells are those horizontally or vertically neighboring. The
 * same letter cell may not be used more than once in a word.
 * 
 * 
 * 
 * Example:
 * 
 * 
 * Input: 
 * board = [
 * ⁠ ['o','a','a','n'],
 * ⁠ ['e','t','a','e'],
 * ⁠ ['i','h','k','r'],
 * ⁠ ['i','f','l','v']
 * ]
 * words = ["oath","pea","eat","rain"]
 * 
 * Output: ["eat","oath"]
 * 
 * 
 * 
 * 
 * Note:
 * 
 * 
 * All inputs are consist of lowercase letters a-z.
 * The values of words are distinct.
 * 
 * 
 */

// @lc code=start
class Solution {
    // Learned from:
    // https://zxi.mytechroad.com/blog/searching/leetcode-212-word-search-ii/
public:
    std::vector<std::string> findWords(std::vector<std::vector<char>>& board, std::vector<std::string>& words) {
        std::unordered_set<std::string> unique_words(words.begin(), words.end());
        std::vector<std::string> res;
        for (const std::string& word : unique_words) {
            if (exist(board, word)) {
                res.push_back(word);
            }
        }
        return res;
    }
private:
    int width;
    int height;
    bool exist(std::vector<std::vector<char>> &board, std::string word) {
        if (board.size() == 0) return false;
        height = board.size();
        width  = board[0].size();
        for (int i = 0; i < width; ++i) {
            for (int j = 0; j < height; ++j) {
                if (search(board, word, 0, i, j)) {
                    return true;
                }
            }
        }
        return false;
    }

    bool search(std::vector<std::vector<char>>& board, const std::string& word, int d, int x, int y) {
        if (x < 0 || x == width || y < 0 || y == height || word[d] != board[y][x]) {
            return false;
        }

        if (d == word.size() - 1) {
            return true;
        }

        char cur = board[y][x];
        board[y][x] = '#';
        bool found = search(board, word, d+1, x+1, y)
                || search(board, word, d+1, x-1, y)
                || search(board, word, d+1, x, y+1)
                || search(board, word, d+1, x, y-1);
        board[y][x] = cur;
        return found;
    }
};
// @lc code=end
