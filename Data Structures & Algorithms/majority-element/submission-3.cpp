// Sorting Approach O(n log n)
class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        // Sort
        sort(nums.begin(), nums.end());

        // Frequency count
        int freq{1}, result = nums[0];
        for (int i = 1; i < n; i++) {
            if (nums[i] == nums[i - 1]) {
                freq++;
            } else {
                freq = 1;
                result = nums[i];
            }

            if (freq > n / 2) return result;
        }
        return result;
    }
};