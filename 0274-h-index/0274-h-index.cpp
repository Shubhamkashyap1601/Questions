class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end(),greater<int>());
        int idx = 0;
        int n = citations.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(citations[i]==0)
            count++;
        }
        if(count==n)
        return 0;
        for(int i=0;i<n;i++){
            if(citations[i]>=i+1)
            idx = i;
            else
            break;
        }
        return idx+1;
    }
};