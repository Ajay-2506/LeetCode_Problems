class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int maxi = 0 ;
        int count = 0 ;
        for(int i=0 ; i <n ;i++){
            if(s[i]=='('){
                count++;
            }

            if(s[i]==')'){
                count--;
            }
            maxi = max(count,maxi);

        }
        return maxi;
    }
};