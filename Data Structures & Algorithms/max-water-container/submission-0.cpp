// Optimised Approach O(n)
class Solution {
   public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int maxWater{0}, lptr{0}, rptr{n - 1};
        while (lptr < rptr) {
            int wt = rptr - lptr;
            int ht = min(height[lptr], height[rptr]);
            int currWater = wt * ht;
            maxWater = max(maxWater, currWater);
            height[lptr] < height[rptr] ? lptr++ : rptr--;
        }
        return maxWater;
    }
};
