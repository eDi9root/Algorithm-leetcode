class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string res;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '*') {
                st.push(s[i]);
            } else {
                st.pop();
            }
        }
        
        while(!st.empty()) {
            char c = st.top();
            res += string(1,c);
            st.pop();
        }
        
        reverse(res.begin(), res.end());
        return res;
    }
};

