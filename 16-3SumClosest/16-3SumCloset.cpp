class Solution
{
public:
    int threeSumClosest(vector<int> &nums, int target)
    {
        std::sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        for (int i = 0; i < nums.size() - 2; ++i)
        {
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right)
            {
                int s = nums[i] + nums[left] + nums[right];
                if (s == target)
                {
                    return s;
                }
                int a = target - closest;
                int b = target - s;
                if (abs(a) > abs(b))
                {
                    closest = s;
                }
                if (s < target)
                {
                    left++;
                }
                if (s > target)
                {
                    right--;
                }
            }
        }
        return closest;
    }
};
