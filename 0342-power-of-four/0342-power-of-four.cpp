class Solution {
public:
    bool isPowerOfFour(int n) {
        while(n>=4){
            if(n%4!=0)
            break;
            n/=4;
        }
        if(n!=1)
        return false;
        return true;
    }
};