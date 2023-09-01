class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int>pos;
        queue<int>neg;

        for(int i = 0 ; i<nums.size(); i++){
            if(nums[i]>0){
                pos.push(nums[i]);
            }
            else{
                neg.push(nums[i]);
            }
        }

        vector<int>ans;
        for(int i=0 ; i <= nums.size()/2 -1; i++){
                ans.push_back(pos.front());
                ans.push_back(neg.front());
                pos.pop();
                neg.pop();
            }
        return ans;
        
    }
};