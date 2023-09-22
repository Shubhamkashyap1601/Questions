class Solution {
public:
    int romanToInt(string s) {
        int n = s.size(),a[n];
        for(int i=0;i<n;i++){
            if(s[i]=='I')
            {
                a[i] = 1;
            }
            else
            if(s[i]=='V')
            {
                a[i] = 5;
            }
            else
            if(s[i]=='X')
            {
                a[i] = 10;
            }
            else
            if(s[i]=='L')
            {
                a[i] = 50;
            }
            else
            if(s[i]=='C')
            {
                a[i] = 100;
            }
            else
            if(s[i]=='D')
            {
                a[i] = 500;
            }
            else
            if(s[i]=='M')
            {
                a[i] = 1000;
            }
            if(i>0)
            if(a[i-1]<a[i])
            a[i-1]*=-1;
        }
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        return sum;
    }
};