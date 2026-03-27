class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> window;  // current substring characters
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            // अगर duplicate मिले तो left pointer move करो
            while (window.count(s[right])) {
                window.erase(s[left]);
                left++;
            }
            // नया character insert करो
            window.insert(s[right]);
            // max length update करो
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};