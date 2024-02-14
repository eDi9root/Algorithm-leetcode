class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int result = 0;
        int alt = 0;
        for (int i = 0; i < gain.size(); i++) {
            alt = alt + gain[i];
            if (result < alt) {
                result = alt;
            }
        }
        return result;
    }
};