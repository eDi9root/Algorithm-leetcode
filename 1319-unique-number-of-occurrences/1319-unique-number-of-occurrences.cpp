class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;
        unordered_set<int> res;

        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        for (auto key : mp) {
            res.insert(key.second);
        }
        return mp.size() == res.size();
    }
};

// 1 2 3
// 3 2 1