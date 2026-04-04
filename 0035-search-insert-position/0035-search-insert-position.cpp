class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(target==nums[i]){
                return i;
            }
            if(i<nums.size()-1){
                if(target>nums[i] && target<nums[i+1]){
                    return i+1;
                }
            
            }
            if(target>nums[nums.size()-1]){
                return nums.size();
            }
            if(target<nums[0]){
                return 0;
            }
            
        }
        return 0;
    }
};