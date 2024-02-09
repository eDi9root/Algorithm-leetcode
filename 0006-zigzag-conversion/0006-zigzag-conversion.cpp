class Solution {
public:
    string convert(string s, int numRows) {
        vector <string> v(numRows, "");
        string result;

        int j = 0;
        bool RE = true;

        if (numRows <= 1) {
            return s;
        }

        for (int i = 0; i < s.length(); i++) {
            if (j == 0 || j == numRows - 1) {
                RE = !RE;
            }
            v.at(j) = v.at(j) + s.at(i);
            if (!RE) {
                j++;
            } else {
                j--;
            }
        }
        for (int i = 0; i < numRows; i++) {
            result = result + v.at(i);
        }
        
        return result;

    }
};