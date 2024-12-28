class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int s = -1, e = -1;
        int n = nums.size();
        if (n == 0)
            return {s, e};

        if (nums[n / 2] > target)
        {
            int i = n / 2;
            while (i >= 0 && nums[i] >= target)
            {
                if (nums[i] == target)
                {
                    if (e == -1)
                    {
                        e = i;
                        s = i;
                    }
                    s = i;
                }
                i--;
            }
        }
        else if (nums[n / 2] < target)
        {
            int i = n / 2;
            while (i < n && nums[i] <= target)
            {
                if (nums[i] == target)
                {
                    if (s == -1)
                    {
                        e = i;
                        s = i;
                    }
                    e = i;
                }
                i++;
            }
        }
        else
        {
            s = n / 2;
            e = n / 2;
            while (s >= 0 && nums[s] == target)
                s--;
            while (e < n && nums[e] == target)
                e++;
            s++;
            e--;
        }
        return {s, e};
    }
};
