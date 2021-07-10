class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int ind=0,f=0;
        while(ind<ransomNote.size()){
            int c=ind;
            f=0;
            for(int i=0;i<magazine.size();i++){
                if(ransomNote[ind]==magazine[i]){
                    magazine.erase(magazine.begin()+i);
                    ind++;
                    break;
                }
            }
            if(c==ind){
                f=1;
                break;
                }
        }
        if(f==1)
        {
            return false;
        }
        return true;
    }
};
