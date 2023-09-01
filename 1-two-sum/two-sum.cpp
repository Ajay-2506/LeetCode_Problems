class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int,int>ans;
      vector<int>vec;
      int n = nums.size();

      for(int i=0;i<n;i++){
          int complement = target - nums[i];

          if(ans.count(complement)){
              vec.push_back(i);
              vec.push_back(ans[complement]);
          }
          ans[nums[i]] = i;
      }
    return vec;
    } 
};