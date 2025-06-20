class Solution {
public:
    int reverse(int x) {
        if (x == INT_MIN) return 0;

        long long ans = 0;
        int sign = x < 0 ? -1 : 1;
        long long num = abs(x);

        while (num > 0) {
            ans = ans * 10 + num % 10;
            if (ans > INT_MAX) {
                return 0;
            }
            num /= 10;
        }

        return sign * ans;
    }
};
