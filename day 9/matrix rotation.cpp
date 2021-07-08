class Solution {
public:
    void check(vector<vector<int>>& mat)
    {
        int i,j;
        for(i=0;i<mat.size();i++)
        {
            for(j=i;j<mat.size();j++)
            {
                swap(mat[i][j],mat[j][i]);
            }
        }
        for(i=0;i<mat.size();i++)
        {
            reverse(mat[i].begin(),mat[i].end());
        }
    }
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int i,j,k=4;
        bool v = false;;
        while(k--)
        {
            check(mat);
            if(mat==target)
            {
                return true;
            }
        }
        return v;
    }
};
