class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0;
        int j = 0;
        int cont = 0;
        int total = 0;
        int result = 0;
        
        while (j < nums.size()) {
            if (nums[j] == 0) {
                cont++;
                while (cont > 1) {
                    if (nums[i] == 0) cont--;
                    else total--;
                    i++;
                }
            } else {
                total++;
                result = max(result, total);
            }
            j++;
        }
        if (result == nums.size()) return --result;
        return result;
    }
};