class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int sum = n*n*(n*n+1)/2;
        int repeating_val=0;
        unordered_map<int,int> map;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(map.find(grid[i][j])!=map.end())
                {
                    repeating_val = grid[i][j];
                }
                else
                {
                    map[grid[i][j]] = grid[i][j];
                    sum-=grid[i][j];
                }
            }
        }
        return  {repeating_val,sum};
    }
};