#include <bits/stdc++.h>

using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    vector<string> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    unordered_set<string> mp;
    vector<string> ar{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    for(i=0;i<v.size();i++){
        string st=v[i];
        string str;
        for(j=0;j<st.size();j++){
            str=str+ar[st[j]-'a'];
        }
        if(mp.find(str)==mp.end()){
            mp.insert(str);
        }
    }
    cout<<mp.size();
}
