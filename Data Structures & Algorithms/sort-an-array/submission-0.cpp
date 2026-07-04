class Solution {
   private:
    int mo3(vector<int>& nums, int start, int end) {
        int mid = start + (end - start) / 2;
        int a = nums[start], b = nums[mid], c = nums[end];
        if ((a >= b && a <= c) || (a >= c && a <= b)) return start;
        if ((b >= a && b <= c) || (b >= c && b <= a)) return mid;
        return end;
    }
    int partition(vector<int>& nums, int start, int end) {
        int pivIndex = mo3(nums, start, end);
        int pivot = nums[pivIndex];
        swap(nums[start], nums[pivIndex]);
        int l = start + 1, r = end;
        while (l <= r) {
            while (l <= end && nums[l] < pivot) {
                l++;
            }
            while (r > start && nums[r] > pivot) {
                r--;
            }
            if (l <= r) {
                swap(nums[l], nums[r]);
                l++, r--;
            }
        }
        swap(nums[start], nums[r]);
        return r;
    }
    void quick(vector<int>& nums, int start, int end) {
        if (start >= end) {
            return;
        }
        int ind = partition(nums, start, end);
        quick(nums, start, ind - 1);
        quick(nums, ind + 1, end);
    }

   public:
    vector<int> sortArray(vector<int>& nums) {
        vector<int> copy = nums;
        quick(copy, 0, nums.size() - 1);
        return copy;
    }
};