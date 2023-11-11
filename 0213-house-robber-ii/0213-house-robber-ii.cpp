class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        if(n==2){
            return max(nums[0],nums[1]);
        }
        if(n==3){
            return max(nums[0],max(nums[1],nums[2]));
        }
        int maxx = 0;
        vector<int> v(n+1);
        v[0] = 0;
        v[1] = nums[0];
        for(int i=2;i<n;i++){
            v[i] = max(v[i-1],v[i-2]+nums[i-1]);
        }
        maxx = max(maxx,v[n-1]);
        v.clear();
        v[1] = 0;
         v[2] = nums[1];
        for(int i=3;i<=n;i++){
            v[i] = max(v[i-1],v[i-2]+nums[i-1]);
        }
        maxx= max(maxx,v[n]);
        return maxx;
    }
};