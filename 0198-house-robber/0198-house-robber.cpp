int maxx = 0;
class Solution {
public:
    int rob(vector<int>& nums){
        if(nums.size()==1)
        return nums[0];
        int prev2 = 0,prev1 = nums[0];
        for(int i=1;i<nums.size();i++){
            maxx = max(prev1,prev2+nums[i]);
            prev2 = prev1;
            prev1 = maxx; 
        }
        return maxx;
    }
};