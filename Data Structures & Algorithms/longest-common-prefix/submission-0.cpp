class Solution {
   public:
    string longestCommonPrefix(vector<string>& strs) {
        string common = strs[0];
        int range = strs[0].size();
        for (string s : strs) {
            int i = 0;
            int sz = s.size();
            sz = min(sz, range);
            for (; i < sz; i++) {
                if (common[i] != s[i]) {
                    break;
                }
            }
            range = min(range, i);
        }
        return common.substr(0, range);
    }
};