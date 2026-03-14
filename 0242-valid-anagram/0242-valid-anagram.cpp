class Solution {
public:
    bool isAnagram(string s, string t){
        int s1[26];
        int s2[26];
        unsigned int lens;
        unsigned int lent;
        for(int i=0;s[i]!='\0' ;i++){
            lens+=1;
        }
        for(int i=0;t[i]!='\0' ;i++){
            lent+=1;
        }
        if(lens!=lent){
            return false;
        }
        else{
            if(lens>=1 && lens<=50000){
                for(int i=0;i<lens ;i++){
                    s1[int(s[i])-97]+=1;
                    s2[int(t[i])-97]+=1;
                }
                for(int j=0;j<26;j++){
                    if(s1[j]!=s2[j]){
                    return false;
                    }
                }
            }
        }
        return true;
    }
};