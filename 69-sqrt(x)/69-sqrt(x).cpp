class Solution
{
public:
    int mySqrt(int x)
    {
        double guess = x / 2.0;
        double tolerance = 1e-6;

        while (fabs(guess * guess - x) > tolerance)
        {
            guess = (guess + x / guess) / 2.0;
        }

        return static_cast<int>(guess);
    }
};
