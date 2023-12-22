class Solution {
public:
    void help(vector<int>&A , int B , int i, vector<int>&subset,int sum , vector<vector<int>>&ans){
        if(sum == B) {
            ans.push_back(subset);
            return;
        }
        if(sum>B) return ;
        if(i>=A.size()){
            return;
        }
        help(A,B,i+1,subset,sum,ans);
        
        sum += A[i];
        subset.push_back(A[i]);
        help(A,B,i,subset,sum,ans);
        sum -= A[i];
        subset.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& A, int B) {
         vector<int>subset;
        int sum = 0; 
        vector<vector<int>>ans;
        sort(A.begin(),A.end());
        help(A,B,0,subset,sum,ans);
        return ans;
    }
};