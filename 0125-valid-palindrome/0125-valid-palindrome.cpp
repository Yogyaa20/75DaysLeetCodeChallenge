class Solution {
public:
    bool isPalindrome(string s) {
        string m;
        string palindrome;
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                m.push_back(char(tolower(s[i])));
            }
            if((s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
                m.push_back(s[i]);
            
            }
        }
        for(int j=m.size()-1;j>=0;j--){
            palindrome.push_back(m[j]);
        }
        if(m==palindrome){
            return true;
        }
        return false;
    }
};