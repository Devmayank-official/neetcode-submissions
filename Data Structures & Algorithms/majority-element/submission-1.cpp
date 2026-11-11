class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majEle{0};
        for (int i = 0; i < n; i++) {
            int counter{0};
            majEle = nums[i];
            for (int j = 0; j < n; j++) {
                if (majEle == nums[j]) counter++;
            }
            if (counter > (n / 2)) return majEle;
        }
        return majEle;
    }
};
