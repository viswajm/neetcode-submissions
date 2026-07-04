class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> mh;
        for (auto& [num, freq] : counts) {
            mh.push({freq, num});
            if (mh.size() > k) {
                mh.pop();
            }
        }
        vector<int> ans;
        while (!mh.empty()) {
            ans.push_back(mh.top().second);
            mh.pop();
        }
        return ans;
    }
};
