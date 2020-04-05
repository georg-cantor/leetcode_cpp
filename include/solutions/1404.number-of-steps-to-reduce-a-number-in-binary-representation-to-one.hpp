class Solution {
public:
  int numSteps1(std::string s) {
      return numStepsRec(s);
  }

  int numStepsRec(std::string s) {
      int len = s.size();
      if (len == 1) {
          return 0;
      }
      else if (s.find('0') == std::string::npos) {
          return len + 1;
      }
      else if (s[len-1] == '1') {
          return 1+numStepsRec(add_one(s));
      } else {
          return 1+numStepsRec(s.substr(0,len-1));
      }
  }
  std::string add_one(std::string s) {
      for (int i = s.size()-1; i>=0; --i) {
          if (s[i] == '0') {
              s[i] = '1';
              break;
          } else {
              s[i] = '0';
          }
      }
      return std::move(s);
  }
  int numSteps(std::string s) {
      int ans = 0;
      int extra = 0;
      int it = s.size()-1;
      while (it > 0) {
          int dig = s[it]-'0'+extra;
          std::cout<<extra<<"\t"<<dig<<std::endl;
          extra = dig ? 1 : 0;
          if (dig % 2) {
              ans += 2;
          }
          else
              ans ++;
          it--;
      }
      return ans+extra;
  }
};

