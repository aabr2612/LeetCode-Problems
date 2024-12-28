class Solution
{
public:
    void sortColors(vector<int> &nums)
    {
        int cIndex = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                swap(nums[cIndex], nums[i]);
                cIndex++;
            }
        }
        for (int i = cIndex; i < nums.size(); i++)
        {
            if (nums[i] == 1)
            {
                swap(nums[cIndex], nums[i]);
                cIndex++;
            }
        }
    }
};