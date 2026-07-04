class Solution {
   public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            st.insert(num);
        }
        int maxLen = 0;
        for (int num : nums) {
            int curr = 1;
            if (st.find(num - 1) == st.end()) {
                while (st.find(num + curr) != st.end()) {
                    curr++;
                }
                maxLen = max(maxLen, curr);
            }
        }
        return maxLen;
    }
};
