class Solution {
public:
    string reverseWords(string s) {
        string s1;
        for(int i=0;i<s.size();i++){
            string temp;
            while(s[i]!=' ' && i<s.size()){
                temp +=s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            s1+=temp;
            if(i<s.size())
            s1+=' ';
        }
        return s1;
    }
};