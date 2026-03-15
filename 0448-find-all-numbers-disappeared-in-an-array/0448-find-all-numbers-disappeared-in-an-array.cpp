class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> count(nums.size(),0);
        vector<int> missing;
        sort(nums.begin(),nums.end());
        if(nums.size()>=1 && nums.size()>=1){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=1 && nums[i]<=nums.size()){
                    count[nums[i]-1]+=1;
                }
            }
            for(int j=0;j<nums.size();j++){
                if (count[j]==0){
                    missing.push_back(j+1);
                }
            }
        }
    return missing;  
    }
    
};