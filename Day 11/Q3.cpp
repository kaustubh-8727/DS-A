bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int>alpha(26,0);
        for(int i=0;i<s.length();i++)
        {
            alpha[s[i]-'a']++;
        }
        for(int i=0;i<t.length();i++)
        {
            alpha[t[i]-'a']--;
        }
        for(int i=0;i<26;i++)
        {
            if(alpha[i]!=0)
                return false;
        }
        return true;
    }
