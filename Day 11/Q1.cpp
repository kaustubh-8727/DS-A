bool isPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(!iswalnum(s[i])) i++;
            else if(!iswalnum(s[j])) j--;
            else if(tolower(s[i])!=tolower(s[j])) return false;
            else{i++;j--;}
        }
        return true;
    }
