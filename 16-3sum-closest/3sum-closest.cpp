class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n = nums.size(),ans = -1, diff = INT_MAX;
        
        for(int i=0;i<n;i++){
            int s = i+1,e = n-1;
            
            while(s<e){
                int sum = nums[i]+nums[s]+nums[e];
                if(abs(target-sum)<diff){
                    ans = sum;
                    diff = abs(target-sum);
                }
                if(sum<=target)s++;
                else e--;
            }
        }
        
        return ans;
    }
};