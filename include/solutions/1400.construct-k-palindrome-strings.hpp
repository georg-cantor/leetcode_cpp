//
// Created by 秦栋梁 on 2020/4/12.
//

class Solution {
public:
  bool canConstruct(std::string s, int k) {
      std::vector<int> a(26,0);
      for(auto ch: s) {
          a[ch-'a']++;
      }
      int lo = 0;
      int hi = 0;
      for (auto x: a) {
          if (x != 0) {
              if (x % 2 == 1) {
                  lo++;
              }
              hi += x;
          }
      }
      if (k >= lo && k <= hi) {
          return true;
      } else {
          return false;
      }
  }
};