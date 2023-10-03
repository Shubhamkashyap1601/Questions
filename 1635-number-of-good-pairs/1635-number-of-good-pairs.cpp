class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int> fr;
        int sum = 0;
        for(int i=0;i<nums.size();i++){
            fr[nums[i]]++;
            sum+=fr[nums[i]]-1;
        }
        return sum;
    }
};