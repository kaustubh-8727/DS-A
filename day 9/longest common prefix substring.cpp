class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        int i,j,m=INT_MAX;
        string s,st;
        if(v.size()==1){
            return v[0];
        }
        for(i=0;i<v.size()-1;i++){
            st=solve(v[i],v[i+1]);
            if(st.size()<m){
                m=st.size();
                s=st;
            }
        }
        return s;
    }
    string solve(string s,string st){
        int i,j,l,a=s.size(),b=st.size();
        string str;
        l=min(a,b);
        for(i=0;i<l;i++){
            if(s[i]==st[i]){
                str=str+s[i];
            }
            else{
                break;
            }
        }
        return str;
    }
};
