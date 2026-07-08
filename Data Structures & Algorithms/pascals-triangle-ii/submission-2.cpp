class Solution {
   public:
    vector<int> getRow(int r) {
        r++;
        long long num = 1;
        vector<int> ans;
        ans.push_back(1);
        for (int i = 1; i < r; i++) {
            num *= (r - i);
            num /= i;
            ans.push_back(num);
        }
        return ans;
    }
};