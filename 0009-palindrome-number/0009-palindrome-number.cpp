class Solution {
public:
    bool isPalindrome(int x) {
        long result = 0;
        long origin = x;

        if (x < 0) {
            return false;
        }

        while (origin != 0) {
            int tmp = origin % 10;
            result = result * 10 + tmp;
            origin = origin / 10;
        }

        return (result == x);       

    }
};

// 121,    112211
// make reverse
// 121 % 10 = 1
// 121 / 10 = 12
// 12 % 10 = 2

// 123, 3 2 1
// 30 + 2
// 320 + 1