class Solution {
public:
    int maxArea(vector<int>& height) {
        int result = 0;
        int i = 0;
        int j = height.size() - 1; 
        while (i <= j) {
            int water = (j - i) * min(height[i], height[j]);
            result = max(result, water);
            if (height[i] <= height[j]) {
                i++;
            } else {
                j--;
            }
        }
        return result;
    }
};