/*
 * @lc app=leetcode id=804 lang=cpp
 *
 * [804] Unique Morse Code Words
 *
 * https://leetcode.com/problems/unique-morse-code-words/description/
 *
 * algorithms
 * Easy (75.51%)
 * Likes:    556
 * Dislikes: 547
 * Total Accepted:    125.3K
 * Total Submissions: 164.7K
 * Testcase Example:  '["gin", "zen", "gig", "msg"]'
 *
 * International Morse Code defines a standard encoding where each letter is
 * mapped to a series of dots and dashes, as follows: "a" maps to ".-", "b"
 * maps to "-...", "c" maps to "-.-.", and so on.
 * 
 * For convenience, the full table for the 26 letters of the English alphabet
 * is given below:
 * 
 * 
 * 
 * [".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."]
 * 
 * Now, given a list of words, each word can be written as a concatenation of
 * the Morse code of each letter. For example, "cba" can be written as
 * "-.-..--...", (which is the concatenation "-.-." + "-..." + ".-"). We'll
 * call such a concatenation, the transformation of a word.
 * 
 * Return the number of different transformations among all words we have.
 * 
 * 
 * Example:
 * Input: words = ["gin", "zen", "gig", "msg"]
 * Output: 2
 * Explanation: 
 * The transformation of each word is:
 * "gin" -> "--...-."
 * "zen" -> "--...-."
 * "gig" -> "--...--."
 * "msg" -> "--...--."
 * 
 * There are 2 different transformations, "--...-." and "--...--.".
 * 
 * 
 * Note:
 * 
 * 
 * The length of words will be at most 100.
 * Each words[i] will have length in range [1, 12].
 * words[i] will only consist of lowercase letters.
 * 
 * 
 */

// @lc code=start
class Solution {
public:
    int uniqueMorseRepresentations(std::vector<std::string>& words) {
        load_morse();
        std::map<const std::string, int> morseWords;
        for (std::string word: words) {
            auto morseWord = morseEncoding(word);
            morseWords.insert_or_assign(morseWord,
                    morseWords.find(morseWord) != morseWords.end() ? morseWords[morseWord] + 1 : 1);
        }
        return morseWords.size();
    }

private:
    std::map<const char, std::string> morseMap;
    std::vector<char> notFoundItems;
    void load_morse (){
        morseMap['a'] = ".-";
        morseMap['b'] = "-...";
        morseMap['c'] = "-.-.";
        morseMap['d'] = "-..";
        morseMap['e'] = ".";
        morseMap['f'] = "..-.";
        morseMap['g'] = "--.";
        morseMap['h'] = "....";
        morseMap['i'] = "..";
        morseMap['j'] = ".---";
        morseMap['k'] = "-.-";
        morseMap['l'] = ".-..";
        morseMap['m'] = "--";
        morseMap['n'] = "-.";
        morseMap['o'] = "---";
        morseMap['p'] = ".--.";
        morseMap['q'] = "--.-";
        morseMap['r'] = ".-.";
        morseMap['s'] = "...";
        morseMap['t'] = "-";
        morseMap['u'] = "..-";
        morseMap['v'] = "...-";
        morseMap['w'] = ".--";
        morseMap['x'] = "-..-";
        morseMap['y'] = "-.--";
        morseMap['z'] = "--..";
    }
    std::string morseEncoding(std::string &word) {
        std::string morseRepresentation{};
        for (std::string::iterator it=word.begin(); it!=word.end(); ++it) {
            if (morseMap.find(*it) == morseMap.end())
            {
                //item was not found in the list
                //store it in a vector to report back to user
                notFoundItems.push_back(*it);
            } else {
                morseRepresentation += morseMap.find(*it)->second;
            }
        }
        return morseRepresentation;
    }
};
// @lc code=end
