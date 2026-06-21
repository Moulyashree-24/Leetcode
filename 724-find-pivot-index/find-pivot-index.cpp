class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }

        int i = 0;
        int left = 0;
        int right = sum - nums[0];

        while (i < nums.size()) {
            if (left == right) {
                return i;
            }

            left += nums[i];
            i++;

            if (i < nums.size()) {
                right = sum - nums[i] - left;
            }
        }

        return -1;
    }
};