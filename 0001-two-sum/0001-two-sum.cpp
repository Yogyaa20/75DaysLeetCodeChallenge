class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        if(nums.size()>=2 && nums.size()<=10000){
            for(int i=0; i<nums.size();i++){
                if(nums[i]>=-1000000000 && nums[i]<=1000000000){
                    for(int j=i+1;j<nums.size();j++){
                        if(target>=-1000000000 && target<=1000000000){
                            if(nums[i]+nums[j]==target){
                                v.push_back(i);
                                v.push_back(j);
                                break;
                            }
                            else{continue;}
                        }
                    }   
                }
            }
        
        
        }
        return v;
    }
};