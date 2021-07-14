class Solution {
public:
    int hamingcount(int n){
        int cnt=0;
        while(n!=0){
            cnt++;
            n=n&(n-1);
        }
        return cnt;
    }
    vector<int> countBits(int n) {
        int i,cnt=0;
        vector<int>v;
        for(i=0;i<=n;i++){
            cnt=hamingcount(i);
            v.push_back(cnt);
        }
        return v;
    }
};
