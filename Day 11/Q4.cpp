bool isvowel(char ch)
    {
        ch=tolower(ch);
        if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') return true;
        return false;
    }
    string reverseVowels(string s) {
        int i=0,j=s.length()-1;
        while(i<j)
        {
            if(!isvowel(s[i])) i++;
            else if(!isvowel(s[j])) j--;
            else if(i<j&&isvowel(s[i])&&isvowel(s[j])) 
            {swap(s[i],s[j]);
                i++;j--;
            }
        }
        return s;
    }
