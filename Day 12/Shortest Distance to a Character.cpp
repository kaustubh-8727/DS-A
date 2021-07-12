class Solution {
public:
    vector<int> shortestToChar(string s, char ch) {
        vector<int> v;
        vector<int> ar(s.size());
        for (int i=0;i<s.size();i++) {
            if (s[i] == ch) {
                v.push_back(i);
            }
        }
        for (int i=0;i<s.size();i++) {
            int z = s.size();
            for (int j=0;j<v.size();j++) {
                z = min(z,abs(i-v[j]));
            }
            ar[i] = z;
        }
        return ar;        
    }
};
