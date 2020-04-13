//
// Created by 秦栋梁 on 2020/4/12.
//

class Solution {
public:
  std::vector<int> processQueries1(std::vector<int>& queries, int m) {
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
  void update(std::vector<int>& tree,int i,int val) {
      while(i<tree.size()) {
          tree[i]+=val;
          i+=(i&(-i));
      }
  }

  int getSum(std::vector<int>& tree,int i) {
      int s = 0;
      while(i>0) {
          s+=tree[i];
          i-=(i&(-i));
      }
      return s;
  }

  std::vector<int> processQueries(std::vector<int>& queries, int m) {
      std::vector<int> res,tree((2*m)+1,0);
      std::unordered_map<int,int> hmap;
      for(int i=1;i<=m;++i) {
          hmap[i] = i+m;
          update(tree,i+m,1);
      }

      for(int querie : queries) {
          res.push_back(getSum(tree,hmap[querie])-1);
          update(tree,hmap[querie],-1);
          update(tree,m,1);
          hmap[querie] = m;
          m--;
      }
      return res;
  }
};