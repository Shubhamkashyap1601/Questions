class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxjump = 0;
        for(int i=nums.size()-2;i>=0;i--){
            nums[i]-maxjump>0?maxjump = 0: maxjump++;
        }
        return maxjump==0;
    }
};