class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& v, int k) {
        int i,j,s=0,z;
        map<int,vector<int>> mps;
        vector<int> vs;
        priority_queue <int, vector<int>, greater<int> > q;
        for(i=0;i<v.size();i++){
            s=0;
            for(j=0;j<v[i].size();j++){
                if(v[i][j]==1){
                    s++;
                }
            }
            mps[s].push_back(i);
            q.push(s);
        }
        while(k>0){
            z=q.top();
            vector<int> ar=mps[z];
            for(i=0;i<ar.size() && k>0;i++){
                vs.push_back(ar[i]);
                k--;
            }
            mps.erase(z);
            q.pop();
        }
        return vs;
    }
};
