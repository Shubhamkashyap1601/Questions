class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        map<int,int> fr;
        for(auto i : nums){
            fr[i]++;
        }
        if(fr[target]==0)
        return {-1,-1};
        sort(nums.begin(),nums.end());
        int first = 0,last = nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                first = i;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--)
            if(nums[i]==target){
                last = i;
                break;
            }
        return {first,last};
        }
};