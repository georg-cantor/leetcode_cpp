//
// Created by 秦栋梁 on 2020/4/12.
//

class Solution {
public:
  std::vector<std::string> stringMatching(std::vector<std::string>& words) {
      std::vector<std::string> res{};
      for (int i = 0; i < words.size(); ++i) {
          for (int j = 0; j < words.size(); ++j) {
              if (i != j) {
                  if (words[j].find(words[i]) != std::string::npos) {
                      res.push_back(words[i]);
                      break;
                  }
              }
          }
      }
      return res;
  }
};