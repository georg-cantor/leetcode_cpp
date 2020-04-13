//
// Created by 秦栋梁 on 2020/4/12.
//

class Solution {
public:
  int countLargestGroup(int n) {
      std::map<int, int> mapCnt{
          {1, 0},
          {2, 0},
          {3, 0},
          {4, 0},
          {5, 0},
          {6, 0},
          {7, 0},
          {8, 0},
          {9, 0},
          {10, 0},
          {11, 0},
          {12, 0},
          {13, 0},
          {14, 0},
          {15, 0},
          {16, 0},
          {17, 0},
          {18, 0},
          {19, 0},
          {20, 0},
          {21, 0},
          {22, 0},
          {23, 0},
          {24, 0},
          {25, 0},
          {26, 0},
          {27, 0},
          {28, 0},
          {29, 0},
          {30, 0},
          {31, 0},
          {32, 0},
          {33, 0},
          {34, 0},
          {35, 0},
          {36, 0},
      };
      for (int i = 1; i <= n; i++) {
          ++mapCnt[digitSum(i)];
      }
      std::vector<std::pair<int,int> > arr;
      for (std::map<int,int>::iterator it=mapCnt.begin(); it!=mapCnt.end(); ++it) {
          arr.push_back(std::make_pair(it->first, it->second));
      }
      std::sort(arr.begin(), arr.end(), [](const std::pair<int,int> &p1,const std::pair<int,int> &p2) {
        return p1.second < p2.second;
      });
      int maxCnt = arr[arr.size()-1].second;
      int res{0};
      for (int i = arr.size()-2; i >= 0; --i) {
          if (arr[i].second == maxCnt) {
              res++;
              //maxCntEle.push_back(arr[i].first);
          } else {
              break;
          }
      }
      return res+1;
  }
  int digitSum(int n) {
      int sum = 0;
      while (n != 0) {
          sum += n % 10;
          n = n/10;
      }
      return sum;
  }
};