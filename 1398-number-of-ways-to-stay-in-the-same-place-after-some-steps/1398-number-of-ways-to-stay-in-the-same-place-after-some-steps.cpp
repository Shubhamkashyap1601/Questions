class Solution {
public:

    int numWays(int steps, int arrLen) {
        int M = 1e9+7;
        vector<vector<int>> dp(steps/2+1,vector<int>(steps+1,-1));
        function<long long(int,int)> dfs = [&](int pos,int steps)->long long{
                if(pos < 0 ||  pos > arrLen -1 || pos > steps) return 0;
                if(steps == 0) return pos  == 0;
                if(dp[pos][steps]!=-1) return dp[pos][steps];
                return  dp[pos][steps] = (
                    dfs(pos - 1, steps - 1) % M  + dfs(pos , steps-1) % M +
                    dfs(pos + 1, steps - 1) % M
                )%M;
        };
        return dfs(0,steps)%M;
    }
};