class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prod(nums.size(),1);
        vector<int> suf(nums.size(),1);
        vector<int> pre(nums.size(),1);
        int suffix=1;
        int prefix=1;
        if(nums.size()>=2 && nums.size()<=100000){
            for(int i=0;i<nums.size();i++){
                pre[i]=prefix;
                prefix=prefix*nums[i];
            }
            for(int j=nums.size()-1;j>=0;j--){
                suf[j]=suffix;
                suffix=suffix*nums[j];
            }
            for(int k=0;k<nums.size();k++){
                prod[k]=suf[k]*pre[k];
            }
        }
    return prod;
    }
};