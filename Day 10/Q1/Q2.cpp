class Solution {
public:
    bool isValid(string s) {
        stack<int> m;
        int i;
        if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                return false;
            }
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                m.push(s[i]);
            }
            else if(m.empty()){
                return false;
            }
            else if((s[i]==')' && m.top()=='(') || (s[i]=='}'&&m.top()=='{') || (s[i]==']'&& m.top()=='['))
            {
                m.pop();
            }
            else{
                return false;
            }
        }
        if(m.empty()){
            return true;
        }
        else{
            return false;
        }
        return true;
    }
};
