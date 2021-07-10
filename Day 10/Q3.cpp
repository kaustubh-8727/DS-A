class Solution {
public:
    int strStr(string haystack, string needle) {
        int i,j,k=0;
        
        if(haystack.length()>0 && needle.length()==0 || haystack.length()==0 && needle.length()==0)
        {
            return 0;
        }
        if(haystack.length()==0 && needle.length()>0)
        {
            return -1;
        }
        for(i=0;i<haystack.length();i++)
        {
            if(haystack[i]==needle[k])
            {
                k++;
            }
            else{
                i = i-k;
                k=0;
            }
            if(k==needle.length())
            {
                return i-needle.size()+1;
            }
        }
        return -1;
        
    }
};
