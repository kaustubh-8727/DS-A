class Solution {
public:
    int islandPerimeter(vector<vector<int>>& v) {
        int i,j,nr=v.size(),nc=v[0].size(),c,row,col,s=0;
        for(row=0;row<nr;row++){
            c=0;
            for(col=0;col<nc;col++){
                if(v[row][col]==1){
                    c=0;
                    if (row - 1 >= 0 && v[row-1][col] == 1) {
                      c++;
                    }
                    if (row + 1 < nr && v[row+1][col] == 1) {
                      c++;
                    }
                    if (col - 1 >= 0 && v[row][col-1] == 1) {
                      c++;
                    }
                    if (col + 1 < nc && v[row][col+1] == 1) {
                      c++;
                    }
                    s=s+(4-c);
                }
            }
        }
        return s;
    }
};
