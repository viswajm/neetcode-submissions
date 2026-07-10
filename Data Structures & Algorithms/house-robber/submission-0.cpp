class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n <= 2) {
            return *max_element(nums.begin(), nums.end());
        }
        int prev = max(nums[1], nums[0]), prev2 = nums[0];
        for (int i = 2; i < n; i++) {
            int curr = max(nums[i] + prev2, prev);
            prev2 = prev;
            prev = curr;
        }
        return prev;
    }
};