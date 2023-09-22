class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;
        int n=nums.size();
        int countz = 0,prod = 1;
        for(int i=0;i<n;i++){
            if(nums[i]==0)
            countz++;
            else
            prod*=nums[i];
        }
        if(countz>1){
            for(int i=0;i<n;i++){
                v.push_back(0);
            }
            return v;
        }

        for(int i=0;i<n;i++){
            if(nums[i]==0)
            v.push_back(prod);
            else{
                if(countz==0)
                v.push_back(prod/nums[i]);
                else{
                    v.push_back(0);
                }
            }
        }
            return v;

    }
};