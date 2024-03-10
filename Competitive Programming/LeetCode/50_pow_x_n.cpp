class Solution {
private:
    double power(double x, int n) {
        if (n == 0) return 1;

        if (x == 0) return 0;

        double result = power(x, n / 2);

        result *= result;

        return (n % 2 == 0) ? result : x * result;
    }

public:
    double myPow(double x, int n) {
        long nn = n;

        if (nn < 0) {
            nn *= -1;
        }

        double pow = power(x, n);

        if (n < 0) {
            return 1.0 / pow;
        }

        return pow;
    }
};