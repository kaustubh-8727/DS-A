class Solution {
public:
    string mostCommonWord(string p, vector<string>& b) {
        string ar;
        int i=0,j,c = 0;
        unordered_map<string, int> mp;
        while(i < p.size()){
            string ar = "";
            while(i < p.size() && isalpha(p[i])){
                ar += tolower(p[i]);
                i++;
            }
            if(ar != "")
                mp[ar]++;
            i++;
        }
        for(j=0;j<b.size();j++){
            mp.erase(b[j]);
        }
        for(auto it : mp){
            if(c < it.second){
                ar = it.first;
                c = it.second;
            }
        }
        return ar;
    }
};
