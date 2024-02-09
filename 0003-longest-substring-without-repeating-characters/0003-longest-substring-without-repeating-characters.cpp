class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int Max = 0;
        unordered_map<char, int> M;
        int left = 0;

        for (int right = 0; right < n; right ++) {
            if (M.count(s[right]) == 0 || M[s[right]] < left) {
                M[s[right]] = right;
                Max = max(Max, right - left + 1);
            } else {
                left = M[s[right]] + 1;
                M[s[right]] = right;
            }
        }
        return Max;
    }
};