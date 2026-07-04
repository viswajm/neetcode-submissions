class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, mx = 0;
        for (int num : nums) {
            curr = num == 1 ? curr + 1 : 0;
            mx = max(curr, mx);
        }
        return mx;
    }
};