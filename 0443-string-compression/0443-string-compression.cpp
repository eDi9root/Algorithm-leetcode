class Solution {
public:
    int compress(vector<char>& chars) {
        int result = 0;

        for (int i = 0; i < chars.size();) {
            const char letter = chars[i];
            int count = 0;

            while (i < chars.size() && chars[i] == letter) {
                ++count;
                ++i;
            }
            chars[result++] = letter;

            if (count > 1) {
                for (const char c : to_string(count)) {
                    chars[result++] = c;
                }
            }
        }
        return result;
    }
};