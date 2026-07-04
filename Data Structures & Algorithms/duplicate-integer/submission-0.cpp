class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> f;
        for(int num:nums)
        {
            f[num]++;
            if(f[num]>1)
            {
                return true;
            }
        }
        return false;
    }
};