
class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> map;
        int n = strs.size();
        for (int i = 0; i < n; i++)
        {
            string key = strs[i];
            sort(key.begin(), key.end());
            map[key].push_back(strs[i]);
        }
        for (const auto &pair : map)
        {
            ans.push_back(pair.second);
        }
        return ans;
    }
};