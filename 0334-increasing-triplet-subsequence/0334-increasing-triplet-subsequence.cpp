class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int len = nums.size();
        int l = INT_MAX;
        int r = INT_MAX;
        if (len < 3) {
            return false;
        }
        for (int i = 0; i < len; i++) {
            if (nums[i] > r) {
                return true;
            } else if (nums[i] < l) {
                l = nums[i];
            } else if (nums[i] > l && nums[i] < r) {
                r = nums[i];
            }
        }
        return false;
    }
};