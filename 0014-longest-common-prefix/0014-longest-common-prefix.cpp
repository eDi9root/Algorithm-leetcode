class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int n = strs.size();
        sort(begin(strs), end(strs));
        string first = strs[0];
        string last = strs[n-1];

        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] == last[i]) {
                result += first[i];
            } else {
                break;
            }
        }
        return result;   
    }
};