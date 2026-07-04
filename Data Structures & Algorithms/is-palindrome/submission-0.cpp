class Solution {
   public:
    bool isPalindrome(string s) {
        erase_if(s, [](char c){return !isalnum(c);});
        transform(s.begin(), s.end(), s.begin(), [](unsigned char c) { return tolower(c);});
        int n = s.size();
        for(int i = 0;i<s.size()>>1;i++)
        {
            if(s[i]!=s[n-1-i])
            {
                return false;
            }
        }
        return true;
    }
};
