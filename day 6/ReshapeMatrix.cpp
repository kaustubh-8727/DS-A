class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& v, int r, int c) {
        int i,j,row=v.size(),col=v[0].size(),k=0,l=0;
        vector<vector<int>> ar(r,(vector<int>(c)));
        if(row*col!=r*c){
            return v;
        }
        for(i=0;i<r;i++){
            for(j=0;j<c;j++){
                ar[i][j]=v[k][l];
                l++;
                if(l>=col){
                    k++;
                    l=0;
                }
            }
        }
        return ar;
    }
};
