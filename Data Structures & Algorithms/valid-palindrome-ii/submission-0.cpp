class Solution {
   public:
    bool validPalindrome(string s) {
        int n = s.size(), used = 0, l = 0, r = n - 1, l1, r1;
        while (l < r) {
            if (s[l] != s[r]) {
                used = 1;
                break;
            } else {
                l++, r--;
            }
        }
        if (l >= r) {
            return true;
        }
        l1 = l + 1, r1 = r;
        while (l1 < r1) {
            if (s[l1] != s[r1]) {
                break;
            } else {
                l1++, r1--;
            }
        }
        if (l1 >= r1) {
            return true;
        }
        l1 = l, r1 = r - 1;
        while (l1 < r1) {
            if (s[l1] != s[r1]) {
                break;
            } else {
                l1++, r1--;
            }
        }
        if (l1 >= r1) {
            return true;
        }
        return false;
    }
};