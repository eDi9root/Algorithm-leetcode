class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int>v;
        
        for (auto elm: nums1) {
            v.push_back(elm);
        }

        for (auto elm: nums2) {
            v.push_back(elm);
        }

        sort(v.begin(), v.end());

        int total = v.size();

        if (total % 2 == 0) {
            return (v[total/2] + v[(total/2) - 1])/2.0;
        } else {
            return v[total/2];
        }
        
    }
};