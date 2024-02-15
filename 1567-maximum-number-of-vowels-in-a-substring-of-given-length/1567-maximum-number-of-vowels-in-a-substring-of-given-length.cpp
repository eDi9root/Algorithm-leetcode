class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_map<char,int> m;
        int result = 0;
        int idx = 0;
        int answer = 0;

        for (int i = 0; i < k; i++) {
            m[s[i]]++;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                result++;
            }
        }

        for (int i = k; i < s.length(); i++) {
            answer = max(answer, result);
            m[s[idx]]--;
            if (s[idx] == 'a' || s[idx] == 'e' || s[idx] == 'i' || s[idx] == 'o' || s[idx] == 'u') {
                result--;
            }
            m[s[i]]++;
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                result++;
            }
            idx++;
        }
        answer = max(answer, result);
        return answer;
    }
};

// a b   c i
// 1 0/1