class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> v;
        for(int i=0;i<nums.size();i++){
            if(1-nums[i]&1)
            v.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]&1)
            v.push_back(nums[i]);
        }
        return v;
    }
};