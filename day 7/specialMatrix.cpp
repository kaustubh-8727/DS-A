class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& v) {
        int i,j,nc=v[0].size(),nr=v.size(),m,n,val;
        for(i=0;i<v.size();i++){
            m=i;n=0;
            val=v[i][0];
            m++;
            n++;
            while(m<nr && n<nc){
                if(v[m][n]!=val){
                    return false;
                }
                m++;
                n++;
            }
        }
        for(i=1;i<nc;i++){
            m=0;n=i;
            val=v[0][i];
            m++;
            n++;
            while(m<nr && n<nc){
                if(v[m][n]!=val){
                    return false;
                }
                m++;
                n++;
            }
        }
        return true;
    }
};
