class Solution {
public:
    int lengthOfLastWord(string s) {
        int l,i,j=0,d,k=0,m;
        string g;
        l=s.length()-1;
        if(s.length()==0){
            return 0;
        }
        while(l>=0 && s[l]==' '){
             l--;
        }
        while(l>=0 && s[l]!=' '){
            g.push_back(s[l]);
            l--;
        }
         return g.length();
    }
};
