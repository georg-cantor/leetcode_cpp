//
// Created by 秦栋梁 on 2020/4/12.
//

class Solution {
public:
  std::vector<int> processQueries(std::vector<int>& queries, int m) {
      std::vector<int> res{};
      std::list<int> permutation{};
      for (int i = 0; i < m; ++i) {
          permutation.push_back(i+1);
      }

      for (auto query: queries) {
          auto it = std::find(permutation.begin(), permutation.end(), query);
          res.push_back(std::distance(permutation.begin(), it));
          permutation.erase(it);
          permutation.push_front(query);
      }

      return res;
  }
};