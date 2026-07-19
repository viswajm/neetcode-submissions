class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> h;
        for (int stone : stones) {
            h.push(stone);
        }
        while (h.size() > 1) {
            int one = h.top();
            h.pop();
            int two = h.top();
            h.pop();
            if (one != two) {
                h.push(one - two);
            }
        }
        return h.empty() ? 0 : h.top();
    }
};
