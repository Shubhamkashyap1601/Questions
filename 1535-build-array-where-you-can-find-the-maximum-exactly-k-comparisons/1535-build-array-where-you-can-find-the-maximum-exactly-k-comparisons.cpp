class Solution {
public:
    int numOfArrays(int n, int m, int k) {
        long P = 1000000007;
        long f[55][105][55];
            for (int j = 1; j <= m; j++) {
        f[1][j][1] = 1;
    }
    
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            for (int k1 = 1; k1 <= k; k1++) {
                f[i][j][k1] = 0;
                
                for (int j1 = 1; j1 < j; j1++) {
                    f[i][j][k1] = (f[i][j][k1] + f[i - 1][j1][k1 - 1]) % P;
                }
                
                f[i][j][k1] = (f[i][j][k1] + (j * f[i - 1][j][k1]) % P) % P;
            }
        }
    }
    
    long ans = 0;
    for (int j = 1; j <= m; j++) {
        ans = (ans + f[n][j][k]) % P;
    }
    
    return (int) ans;
}
};