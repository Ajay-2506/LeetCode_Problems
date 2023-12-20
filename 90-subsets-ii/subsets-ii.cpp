class Solution {
public:
    void helper(vector<int>&nums , vector<int>&subset , vector<vector<int>>&ans ,int i){
        if(i == nums.size()){
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        helper(nums,subset,ans,i+1);

        subset.pop_back();
        while(i+1 < nums.size() && nums[i]==nums[i+1]) i++;
        helper(nums,subset,ans,i+1);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>subset;
        helper(nums,subset,ans,0);
        return ans;
    }
};