class Solution {
   public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0, mx = 0;
        for (int num : nums) {
            if (num == 1) {
                curr++;
            } else {
                curr = 0;
            }
            mx = max(curr, mx);
        }
        return mx;
    }
};