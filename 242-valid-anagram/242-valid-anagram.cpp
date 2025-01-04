class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        int check[26] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            check[t[i] - 'a']--;
            check[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (check[i] != 0)
                return false;
        }
        return true;
    }
};