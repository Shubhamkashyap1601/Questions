class Solution {
public:
     //declare dp array for length, max number till now, no of max elements till now because these values are varying.
    int dp[102][102][102];
    const int mod = 1e9+7;
    int solve(int n,int m,int k,int max_num_till_now,int search_space){
        if(n==0 && search_space==k) return 1;
        if(n==0) return 0;
        if(dp[n][max_num_till_now][search_space]!=-1) return dp[n][max_num_till_now][search_space];
        int sum=0;
        for(int i=1;i<=m;i++){         
            sum=((sum%mod)+(solve(n-1,m,k,(max_num_till_now>i?max_num_till_now:i),search_space+(max_num_till_now<i?1:0))%mod))%mod;
        }
        return dp[n][max_num_till_now][search_space]=sum;
    }
    int numOfArrays(int n, int m, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(n,m,k,0,0);
    }
};
