class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double av=0;
        for(int i=0;i<k;i++){
            av+=nums[i];
        }
        double maxav;
        maxav=av;
        for(int i=k;i<nums.size();i++){
            av=av-nums[i-k]+nums[i];
            maxav=max(maxav,av);
        }
        return maxav/k;
    }
};