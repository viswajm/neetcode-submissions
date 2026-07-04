class Solution {
   public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> minCost(n + 2, INT_MAX);
        minCost[0] = 0, minCost[1] = 0;
        for (int i = 0; i < n; i++) {
            minCost[i + 1] = min(minCost[i + 1], minCost[i] + cost[i]);
            minCost[i + 2] = min(minCost[i + 2], minCost[i] + cost[i]);
        }
        return minCost[n];
    }
};
