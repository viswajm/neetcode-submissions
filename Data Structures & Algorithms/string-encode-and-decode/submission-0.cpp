class Solution {
   public:
    string encode(vector<string>& strs) {
        string en = "";
        for (string str : strs) {
            int len = str.size();
            en += (char)len;
            en += str;
        }
        return en;
    }

    vector<string> decode(string s) {
        vector<string> de;
        int i = 0;
        while (i < s.size()) {
            int len = (unsigned char)s[i];
            i++;
            string curr = s.substr(i, len);
            i += len;
            de.push_back(curr);
        }
        return de;
    }
};
