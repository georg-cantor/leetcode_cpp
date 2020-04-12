//
// Created by 秦栋梁 on 2020/4/12.
//

// @lc code=start
class Solution {
public:
  int sumFourDivisors(std::vector<int>& nums) {
      int result = 0;
      for (auto num: nums) {
          int total = 0;
          int a;
          for (int i = 2; i*i <= num; i++) {
              if (num%i == 0) {
                  if (i*i == num) {
                      total++;
                  }else {
                      a = num/i;
                      total = total + 2;
                  }
              }
          }
          if (total == 2) {
              //printf("1-%d-%d-%d\n",a, num/a, num);
              result += (num+1+a+(num/a));
          }
      }
      return result;
  }
};
// @lc code=end
