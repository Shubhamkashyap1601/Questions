class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),m = nums2.size();
        vector<int> v;
        int temp1 = 0,temp2 =0;
        while(temp1<n && temp2<m){
            if(nums1[temp1]<nums2[temp2]){
                v.push_back(nums1[temp1]);
                temp1++;
            }
            else{
                v.push_back(nums2[temp2]);
                temp2++;
            }
        }
        while(temp1<n){
            v.push_back(nums1[temp1]);
            temp1++;
        }
        while(temp2<m){
            v.push_back(nums2[temp2]);
            temp2++;
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        if((n+m)&1)
        return v[(m+n)/2];
        return (v[(m+n)/2]+v[(m+n)/2-1])/2.0;
    }
};