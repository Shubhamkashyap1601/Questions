class Solution {
public:
    string reverseWords(string s) {
       vector<string> v;
        int i = 0;
        while (i < s.size()) {
            while (i < s.size() && s[i] == ' ') {
                i++;
            }
            if (i >= s.size()) {
                break;
            }
            string temp = "";
            while (i < s.size() && s[i] != ' ') {
                temp += s[i];
                i++;
            }
            v.push_back(temp);
        }

        string result = "";
        for (auto it = v.rbegin(); it != v.rend(); ++it) {
            result += *it;
            if (it != v.rend() - 1) {
                result += ' ';
            }
        }
        return result;
    }
};