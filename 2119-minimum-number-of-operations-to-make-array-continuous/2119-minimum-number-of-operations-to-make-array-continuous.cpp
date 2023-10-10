class Solution {
public:
    int minOperations(vector<int>& nums) {
       int ans = nums.size();
        int n = nums.size();
        set<int> uniqueNums(nums.begin(), nums.end());
        vector<int> sortedNums(uniqueNums.begin(), uniqueNums.end());
        sort(sortedNums.begin(), sortedNums.end());
        
        for (int i = 0; i < sortedNums.size(); ++i) {
            int j = upper_bound(sortedNums.begin(), sortedNums.end(), sortedNums[i] + n - 1) - sortedNums.begin();
            ans = min(ans, n - (j - i));
        }
        
        return ans;
    }
};