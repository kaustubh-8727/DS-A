class Solution {
public:
    int numRookCaptures(vector<vector<char>>& v) {
        int i,j,nr=v.size(),nc=v[0].size(),c;
        for(i=0;i<v.size();i++){
            for(j=0;j<v[i].size();j++){
                if(v[i][j]=='R'){
                    c=solve(v,i,j,nc,nr);
                }
            }
        }
        return c;
    }
    int solve(vector<vector<char>>& v, int m, int n,int nc,int nr){
        int i,j,c=m,s=n,k=0;
        while(m>=0){
            if(v[m][n]=='B'){
                break;
            }
            if(v[m][n]=='p'){
                k++;
                break;
            }
            m--;
        }
        m=c;
        n=s;
        while(m<nr){
            if(v[m][n]=='B'){
                break;
            }
            if(v[m][n]=='p'){
                k++;
                break;
            }
            m++;
        }
        m=c;
        n=s;
        while(n>=0){
            if(v[m][n]=='B'){
                break;
            }
            if(v[m][n]=='p'){
                k++;
                break;
            }
            n--;
        }
        m=c;
        n=s;
        while(n<nc){
            if(v[m][n]=='B'){
                break;
            }
            if(v[m][n]=='p'){
                k++;
                break;
            }
            n++;
        }
        return k;
    }
};
