#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,s=0,n;
    unordered_map<int,int> mp;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<v.size();i++){
        if(mp.find(v[i])!=mp.end()){
            s=s+mp[v[i]];
        }
        mp[v[i]]++;
    }
    cout<<s;
}
