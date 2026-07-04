class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n,1), suf(n,1);
        for(int i = 0;i+1<n;i++)
        {
            pre[i+1]=pre[i]*nums[i];
            suf[n-2-i] = suf[n-1-i]*nums[n-1-i];
        }
        vector<int>ans(n,1);
        for(int i = 0;i<n;i++)
        {
            ans[i] = pre[i]*suf[i];
        }
        return ans;
    }
};
