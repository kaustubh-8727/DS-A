class Solution {
public:
    vector<string> findWords(vector<string>& v) {
        unordered_map<char,int> mp={{'Q',1},{'W',1},{'E',1},{'R',1},{'T',1},{'Y',1},{'U',1},{'I',1},{'O',1},{'P',1},{'A',2},{'S',2},{'D',2},{'F',2},{'G',2},{'H',2},{'J',2},{'K',2},{'L',2},{'Z',3},{'X',3},{'C',3},{'V',3},{'B',3},{'N',3},{'M',3}};
        vector<string> ar;
        for(int i=0;i<v.size();i++)
        {
            int c=mp[toupper(v[i][0])];
            string st=v[i];
            bool f=1;
            for(int j=0;j<st.size();j++)
            {
                if(c!=mp[toupper(st[j])])
                {
                    f=0;
                    break;
                }
            }
            if(f!=0)
                ar.push_back(v[i]);
        }
        return ar;
    }
};
