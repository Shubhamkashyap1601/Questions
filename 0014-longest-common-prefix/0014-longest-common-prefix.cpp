class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int temp = strs[0].size();
        int n = strs.size();
        for(int i=0;i<n;i++){
            if(strs[i].size()>temp)
            temp = strs.size();
        }
        string s = "";
        char c;
        for(int i =0;i<temp;i++){
            c = strs[0][i];
            for(int j=0;j<n;j++){
                if(strs[j][i]!=c)
                return s;
            }
            s = s+c;
        }
        return s;
    }
};