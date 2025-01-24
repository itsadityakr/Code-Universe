// https://leetcode.com/problems/three-divisors/description/

class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                count++;
                if (i != n / i) count++;
            }
        }
        return count == 3;
    }
};
