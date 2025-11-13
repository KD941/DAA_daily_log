#include <vector>
#include <climits>
#include <algorithm>

using namespace std;
int CMM(vector<int>& p) {
    int n = p.size() - 1;
    if (n < 2) return 0;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    for (int L = 2; L <= n; L++) {
        for (int i = 0; i <= n - L; i++) 
        {
            int j = i + L - 1;
            
            dp[i][j] = INT_MAX;
            for (int k = i; k < j; k++) 
            {
                int cost1 = dp[i][k];
                int cost2 = dp[k+1][j];
                int cost3 = p[i] * p[k+1] * p[j+1];
                
                int totalCost = cost1 + cost2 + cost3;
                dp[i][j] = min(dp[i][j], totalCost);
            }
        }
    }
    return dp[0][n - 1];
}

int main()
{
    vector<int> p = {30, 35, 15}
    int result = CMM(p);
    cout << "Minimum number of multiplications: " << result << endl;
    return 0;
}