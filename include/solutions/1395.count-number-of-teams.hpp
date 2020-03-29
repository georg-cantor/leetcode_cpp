//
// Created by 秦栋梁 on 2020/3/29.
//

#ifndef LEETCODE_CPP_INCLUDE_SOLUTIONS_1395_COUNT_NUMBER_OF_TEAMS_HPP
#define LEETCODE_CPP_INCLUDE_SOLUTIONS_1395_COUNT_NUMBER_OF_TEAMS_HPP

class Solution {
public:
  int numTeams(std::vector<int>& rating) {
      int len = rating.size();
      int total = 0;

      for (int i=0; i < len; ++i) {
          for (int j = i+1; j < len; ++j) {
              if (rating[j] > rating[i]) {
                  for (int k = j+1; k < len; ++k) {
                      if (rating[k] > rating[j]) {
                          total++;
                      }
                  }
              } else {
                  for (int k = j+1; k < len; ++k) {
                      if (rating[k] < rating[j]) {
                          total++;
                      }
                  }
              }
          }
      }
      return total;
  }
};

#endif //LEETCODE_CPP_INCLUDE_SOLUTIONS_1395_COUNT_NUMBER_OF_TEAMS_HPP
