class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> left(nums.size());
        vector<int> right(nums.size());
        left[0] = 0;
        right[nums.size() - 1] = 0;


        for (int i = 1; i < nums.size(); i++) {
            left[i] = left[i - 1] + nums[i - 1];
        }
   

        for (int i = nums.size() - 2; i >= 0; i--) {
            right[i] = right[i + 1] + nums[i + 1];
        }
    

        for (int i = 0; i < nums.size(); i++) {
            if (left[i] == right[i]) {
                return i;
            }
        }
        return -1;
        
    }
};

// i =   0  1  2   3   4  5
// left  0  1  8   11  16 22
// right 27 20 17  11  6   0

// 0  1  2
// 0  2  3
// 0 -1  0

// 0  1
// 0  2
// 5  0