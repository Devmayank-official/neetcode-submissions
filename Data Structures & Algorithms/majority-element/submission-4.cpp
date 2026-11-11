// Moore's Voting Algorithm Approach O(n)
class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int freq{0}, result{0};
        
        for (int i = 0; i < n; i++) {
            if (freq == 0) {
                result = nums[i];
            }
            if (result == nums[i]) {
                freq++;
            } else {
                freq--;
            }

            if (freq > n / 2) return result;
        }
        return result;
    }
};