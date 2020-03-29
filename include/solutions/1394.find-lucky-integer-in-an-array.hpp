//
// Created by 秦栋梁 on 2020/3/29.
//

#ifndef LEETCODE_CPP_INCLUDE_SOLUTIONS_1394_FIND_LUCKY_INTEGER_IN_AN_ARRAY_HPP
#define LEETCODE_CPP_INCLUDE_SOLUTIONS_1394_FIND_LUCKY_INTEGER_IN_AN_ARRAY_HPP

class Solution {
public:
  int findLucky(std::vector<int>& arr) {
      std::unordered_map<int, int> freq;
      int maxLucky = -1;
      for (auto num: arr) {
          freq.insert_or_assign(num, freq.find(num) != freq.end() ? freq[num] + 1 : 1);
      }

      for (const auto &pair : freq) {
          if (pair.first == pair.second) {
              if (pair.second > maxLucky) {
                  maxLucky = pair.second;
              }
          }
      }
      return maxLucky;
  }
};

#endif //LEETCODE_CPP_INCLUDE_SOLUTIONS_1394_FIND_LUCKY_INTEGER_IN_AN_ARRAY_HPP
