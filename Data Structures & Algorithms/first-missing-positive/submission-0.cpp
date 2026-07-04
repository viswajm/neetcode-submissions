class Solution {
   public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> st;
        for (int num : nums) {
            if (num > 0) st.insert(num);
        }
        int i = 1;
        while (st.find(i) != st.end()) {
            i++;
        }
        return i;
    }
};