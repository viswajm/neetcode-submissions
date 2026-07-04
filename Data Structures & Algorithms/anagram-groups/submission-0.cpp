class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(const auto&s:strs)
        {
            string sortedS = s;
            sort(sortedS.begin(), sortedS.end());
            m[sortedS].push_back(s);
        }
        vector<vector<string>>mult;
        for(auto &pair:m)
        {
            mult.push_back(pair.second);
        }
        return mult;
    }
};
