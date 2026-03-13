class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        if(nums.size()>=1 && nums.size()<=100000){
            sort(nums.begin(), nums.end());
            for(int i=0; i < nums.size()-1; i++){
                if(nums[i]>=(-1000000000) && nums[i]<=(1000000000)){
                    if(nums[i]==nums[i+1]){
                        return true;
                    }
                }
            }
            
        }
        return false;
    }
};