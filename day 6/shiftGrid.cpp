class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int i,j,l=0;
        vector<int> v;
        vector<int> v3;
        vector<vector<int> > v2;
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                v.push_back(grid[i][j]);
            }
        }
        for(i=0;i<k;i++)
        {
            int m = v[v.size()-1];
            v.pop_back();
            v.insert(v.begin(),m);
        }
        for(i=0;i<grid.size();i++)
        {
            for(j=0;j<grid[i].size();j++)
            {
                v3.push_back(v[l]);
                l++;
            }
            v2.push_back(v3);
            v3.clear();
        }
        return v2;
        
    }
};
