class Solution {
public:
    bool isSubsequence(string s, string t) {
        int temp = 0;
        for(int i=0;i<t.size();i++){
            if(s[temp]==t[i])
            temp++;
        }
        return temp==s.size();
    }
};