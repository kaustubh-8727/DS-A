#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,c,f,k=0,n;
    string s;
    cin>>n;
    vector<string> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>s;
    unordered_map<char,int> mp;
    for(i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    for(i=0;i<v.size();i++){
        string st=v[i];
        c=0;
        f=0;
        for(j=0;j<st.size();j++){
            if(mp[st[j]]==true){
                c++;
            }
            else{
                f=1;
                break;
            }
        }
        if(f==0){
            k++;
        }
    }
    cout<<k;
}
