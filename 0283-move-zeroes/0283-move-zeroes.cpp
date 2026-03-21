class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(nums.begin()+i);
                i--;
                count++;
            }
        }
        for(int j=0;j<count;j++){
            nums.push_back(0);
        }
        for(int k=0;k<nums.size();k++){
            cout << nums[k]<< " ";
        }
    
    }
};