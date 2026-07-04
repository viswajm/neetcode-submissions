class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        long long pro = 1;
        int cnt = 0, i = 0, ind = -1,n = nums.size();
        for (int num : nums) {
            pro *= (num == 0) ? 1 : num;
            cnt += (num == 0);
            if(num==0)
            {
                ind = i;
            }
            i++;
        }
        vector<int> ans(n,0);
        if(cnt>1)
        {
            return ans;
        }
        else if(cnt==1)
        {
            ans[ind] = pro;
            return ans;
        }
        for(int i = 0;i<n;i++)
        {
            ans[i] = pro/nums[i];
        }
        return ans;
    }
};
