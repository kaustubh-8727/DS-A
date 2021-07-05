class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& v, int sr, int sc, int k) {
        int i,j,nr=v.size(),nc=v[0].size(),z=v[sr][sc];
        if(k!=z){
            bfs(v,sr,sc,k,nc,nr,z);
        }
        return v;
    }
    void bfs(vector<vector<int>>& v, int sr, int sc, int k,int nc,int nr,int z){
        queue<pair<int,int>> q;
        q.push({sr,sc});
        v[sr][sc]=k;
        while(!q.empty()){
            auto rc = q.front();
            q.pop();
            int row = rc.first, col = rc.second;
            if (row - 1 >= 0 && v[row-1][col] == z) {
              q.push({row-1, col}); v[row-1][col] = k;
            }
            if (row + 1 < nr && v[row+1][col] == z) {
              q.push({row+1, col}); v[row+1][col] = k;
            }
            if (col - 1 >= 0 && v[row][col-1] == z) {
              q.push({row, col-1}); v[row][col-1] = k;
            }
            if (col + 1 < nc && v[row][col+1] == z) {
              q.push({row, col+1}); v[row][col+1] = k;
            }
        }
    }
};
