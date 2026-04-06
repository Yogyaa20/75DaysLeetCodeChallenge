class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int m = (l + r) / 2;
            if (nums[m] < nums[r]) {
                r = m;   // Minimum lies in the left half (including mid)
            } else {
                l = m + 1; // Minimum lies in the right half (excluding mid)
            }
        }
        return nums[l]; // l == r → minimum found
    }
};
