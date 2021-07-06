class Solution {
public:
    int countNegatives(vector<vector<int>>& v) {
        int i,j,c=0;
        for(i=0;i<v.size();i++){
            for(j=0;j<v[i].size();j++){
                if(v[i][j]<0){
                    c++;
                }
            }
        }
        return c;
    }
};
