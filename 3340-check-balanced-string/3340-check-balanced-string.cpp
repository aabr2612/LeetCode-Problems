class Solution
{
public:
    bool isBalanced(string num)
    {
        int sum = 0;
        int size = num.size();
        for (int i = 0; i < size - 1; i += 2)
        {
            sum += (num[i] - '0') - (num[i + 1] - '0');
        }
        if (size % 2 == 1)
        {
            sum += (num[size - 1] - '0');
        }

        return sum == 0;
    }
};
