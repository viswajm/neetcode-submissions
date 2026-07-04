class Solution {
public:
    vector<int> replaceElements(vector<int>& a) {
        int n = a.size();
        vector<int>ans = a;
        ans[n-1] = -1;
        for(int i = n-2;i>=0;i--)
        {
            ans[i] = max(ans[i+1],a[i+1]);
        }
        return ans;
    }
};