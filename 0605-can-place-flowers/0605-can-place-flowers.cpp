class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.push_back(0);

        if (flowerbed[0] + flowerbed[1] == 0) {
            n--;
            flowerbed[0] = 1;
        }

        for (int i = 1; i < flowerbed.size() - 1; i++) {
            if (flowerbed[i] + flowerbed[i - 1] + flowerbed[i + 1] == 0) {
                n--;

                flowerbed[i] = 1;
            }
        }
        cout << n << endl;
        return n <= 0;
    }
};