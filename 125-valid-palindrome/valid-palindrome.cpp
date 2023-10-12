class Solution {
public:
    bool valid(char ch){
        if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z') ||(ch>='0' && ch<='9') ){
            return true;
        }
        return false;
    }

    char toLowerCase(char ch){
        if((ch>='a' && ch<='z') ||(ch>='0' && ch<='9')){
            return ch;
        }
        else{
            ch = ch-'A'+'a';
            return ch;
        }
    }

    bool checkPalindrome(string str){
        int i=0;
        int j= str.length()-1;
        while(i<=j){
            if(str[i]==str[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        string str = "";
        for(int i=0;i<n; i++){
            if(valid(s[i])){
                str.push_back(s[i]);
            }
        }
        for(int i=0; i<str.length() ; i++){
            str[i] = toLowerCase(str[i]);

        }
        return checkPalindrome(str);
    }
};