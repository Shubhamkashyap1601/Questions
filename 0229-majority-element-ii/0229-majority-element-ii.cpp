class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> fr;
        for(auto i:nums){
            fr[i]++;
        }
        vector<int> v;
        for(auto i: fr){
            if(i.second>nums.size()/3)
            v.push_back(i.first);
        }
        return v;
    }
};