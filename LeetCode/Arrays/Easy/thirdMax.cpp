class Solution {
public:
    int thirdMax(vector<int>& nums) {
          set<int, greater<int>> ns;
          for (const auto &n : nums) { ns.insert(n); }
          if (ns.size() < 3) { return *ns.begin(); }
          return *next(ns.begin(), 2);
    }
};
