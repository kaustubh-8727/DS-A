class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& v) {
        int i,j,nc=v[0].size(),nr=v.size(),m=0,n=0;
        vector<vector<int>> ar(nc,vector<int>(nr));
        for(i=0;i<nc;i++){
            for(j=0;j<nr;j++){
                ar[i][j]=v[m][n];
                m++;
            }
            n++;
            m=0;
        }
        return ar;
    }
};
