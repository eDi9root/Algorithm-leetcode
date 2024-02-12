class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        if (s=="") {
            return true;
        }
        for (int i = 0; i < t.size(); i++) {
            if (s[j] == t[i]) {
                j++;
            }
            if (j==s.size()) {
                return true;
            }
        }
        return false;


//        int result = s.size();
//        int idx = 0;
 //       for (int i = 0; i < s.size(); i++) {
//            for (int j = idx; j < t.size(); j++) {
//                if (s[i] == t[j]) {
//                    idx = j + 1;
//                    result--;
//                    break;

    }
};