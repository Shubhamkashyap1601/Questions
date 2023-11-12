class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
        return nums[0];
        vector<int> v(n+1,0);
        v[1] = nums[0];
        for(int i=2;i<=n;i++){
            v[i] = max(v[i-1],v[i-2]+nums[i-1]);
        }
        return v[n];
    }
};