class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string w;
        string result;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                continue;
            }
            while (i < s.size() && s[i] != ' ') {
                w += s[i];
                i++;
            }
            st.push(w);
            w.clear();
        }
        while (!st.empty()) {
            result += st.top();
            st.pop();
            if (!st.empty()) {
                result += " ";
            }
        }
        return result;
    }
};