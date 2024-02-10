class Solution {
public:
    string reverseVowels(string s) {
        string vowel = "aeiouAEIOU";
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            i = s.find_first_of(vowel, i);
            j = s.find_last_of(vowel, j);
            if (i < j) {
                swap(s[i++], s[j--]);
            }
        }
        return s;
    }
};