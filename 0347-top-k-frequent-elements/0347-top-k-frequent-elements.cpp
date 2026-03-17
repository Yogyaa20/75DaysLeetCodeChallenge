class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <int> final;
        unordered_map<int,int> fre;
        if(nums.size()>=1 && nums.size()<=100000){
            for(int i=0;i<nums.size();i++){
                if(nums[i]>=-10000 && nums[i]<=10000){
                    fre[nums[i]]++;
                }
            }
            vector <pair<int,int>> vec(fre.begin(),fre.end());
            sort(vec.begin(), vec.end(), [](auto &a, auto &b){
                return a.second > b.second;
            });
            for(int j=0;j<k;j++){
                final.push_back(vec[j].first);
            }


        }
    return final;   
    }
};