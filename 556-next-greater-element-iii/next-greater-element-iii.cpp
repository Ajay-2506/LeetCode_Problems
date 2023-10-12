class Solution {
public:
    int nextGreaterElement(int n) {
        string str = to_string(n);
        int i = str.length()-2;
        int j = str.length()-1;

        while(i>=0 && str[i]>=str[i+1]) i--;
        if(i<0) return -1;
        while(j>=0 && str[i]>=str[j]) j--;
        swap(str[i] , str[j]);
        reverse(str.begin()+1+i, str.end());
        long long int num = 0;
        for(int i= 0 ; i< str.length() ; i++){
               num = num*10+(str[i]-'0');
        }
        if(num > 2147483647 || num < -2147483648){
            return -1;
        }
        return num;
    }
};