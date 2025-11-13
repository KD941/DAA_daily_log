#include<iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int knapsack_01(vector<int>& ws, vector<int>& vals, int W) {
    int n = ws.size();
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < n; i++) {
        for (int w = W; w >= ws[i]; w--) 
        { dp[w] = max(dp[w],vals[i] + dp[w - ws[i]]);
        }
    }
    return dp[W];
}

int main()
{
  vector<int> weights = {1, 3, 4, 2, 5, 6};
  vector<int> values = {10, 1, 14, 5, 7, 3};
  int W = 8;

  int result = knapsack_01(weights, values, W);
  cout << "Maximum value in knapsack: " << result << endl;
  return 0;
}