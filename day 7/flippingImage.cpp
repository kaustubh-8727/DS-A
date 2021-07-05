class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& v) {
        int i,j,n=v.size(),a,b;
        for(i=0;i<n;i++){
            reverse(v[i].begin(), v[i].end());
            for(j=0;j<n;j++){
                v[i][j]^=1;
            }
        }
        return v;
    }
};
