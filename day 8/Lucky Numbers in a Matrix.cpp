class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int i,j,min=INT_MAX,max=0,x=0,k=0,r=0,c=0;
        r = matrix.size();
        c = matrix[0].size();
        unordered_map<int,int> mp;
        vector<int> v3;
        for(i=0;i<matrix.size();i++)
        {
            x = *min_element(matrix[i].begin(),matrix[i].end());
            mp[x]++;
        }
        for(i=0;i<c;i++)
        {
            max = 0;
            for(j=0;j<r;j++)
            {
               if(matrix[j][i]>max)
               {
                   max = matrix[j][i];
               }
            }
            mp[max]++;
        }
        for(auto it : mp){
            if(it.second>=2){
                v3.push_back(it.first);
            }
        }
        return v3;
    }
};
