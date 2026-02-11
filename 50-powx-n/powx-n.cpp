class Solution {
public:

    double solver(double x, long long n) {
        if (n == 0) return 1;

        if (n % 2 == 0)
            return solver(x * x, n / 2);
        else
            return x * solver(x * x, (n - 1) / 2);
    }

    double myPow(double x, int n) {
        long long nn = n;

        if (nn < 0) {
            x = 1 / x;
            nn = -nn;
        }

        return solver(x, nn);
    }
};
