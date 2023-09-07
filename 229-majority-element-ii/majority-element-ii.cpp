class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int>ans;

        for(int i=0; i<n ; i++){
            ans[nums[i]]++;
        }
        int k = n/3;
        vector<int>fans;
        for(auto it:ans){
            if(it.second>k){
                fans.push_back(it.first);
            }
        }
        return fans;
    }
};