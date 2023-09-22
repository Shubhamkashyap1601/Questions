class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<long int>v(n,INT_MAX);
        v[0] = 0;
        for(int i=0;i<n;i++){
            for (int j = 1; j <= nums[i] && i + j < n; j++) {
                v[i + j] = min(v[i + j], v[i] + 1);
            }
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return v[n-1];
    }
};