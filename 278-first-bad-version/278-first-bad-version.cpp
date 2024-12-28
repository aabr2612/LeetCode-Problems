// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        if (n == 1)
        {
            return 1;
        }
        else
        {

            int low = 1, high = n, bad = n;
            while (low < high)
            {
                int mid = low + (high - low) / 2;
                if (isBadVersion(mid))
                {
                    high = mid;
                    bad = mid;
                }
                else
                {
                    low = mid + 1;
                }
            }
            return bad;
        }
    }
};