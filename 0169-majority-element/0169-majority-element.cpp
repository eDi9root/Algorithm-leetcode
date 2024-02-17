class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        int n = nums.size() / 2;
        int result = 0;

        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        for (auto a : mp) {
            if (a.second > n) {
                result = a.first;
            }
        }
        return result;
        
    }
};

// 2 : 4  0
// 1 : 3  1