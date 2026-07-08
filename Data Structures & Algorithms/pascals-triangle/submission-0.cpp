class Solution {
   private:
    vector<int> row(int r) {
        int num = 1;
        vector<int> ans;
        ans.push_back(1);
        for (int i = 1; i < r; i++) {
            num *= (r - i);
            num /= i;
            ans.push_back(num);
        }
        return ans;
    }

   public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for (int i = 1; i <= numRows; i++) {
            ans.push_back(row(i));
        }
        return ans;
    }
};