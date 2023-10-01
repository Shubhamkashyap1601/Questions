class Solution {
public:
    string reverseWords(string s) {
        string temp;
        string s1;
        for(int i=0;i<s.size();i++){
            while(s[i]!=' ' && i<s.size()){
                temp +=s[i];
                i++;
            }
            reverse(temp.begin(),temp.end());
            s1+=temp;
            temp.clear();
            if(i<s.size())
            s1+=' ';
        }
        return s1;
    }
};