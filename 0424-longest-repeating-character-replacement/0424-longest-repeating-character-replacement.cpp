class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0); // frequency of each character
        int left = 0, maxCount = 0, result = 0;

        for (int right = 0; right < s.size(); right++) {
        // update frequency of current character
            freq[s[right] - 'A']++;
        // track the count of the most frequent character in the window
            maxCount = max(maxCount, freq[s[right] - 'A']);

        // if window is invalid, shrink from left
            while ((right - left + 1) - maxCount > k) {
                freq[s[left] - 'A']--;
                left++;
            }

        // update result with valid window size
            result = max(result, right - left + 1);
        }

    return result;
    }
};