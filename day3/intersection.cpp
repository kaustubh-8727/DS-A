#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,s=0,n,m;
    unordered_map<int,int> mp;
    cin>>n;
    cin>>m;
    vector<int> v(n);
    vector<int> ar(m);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<m;i++){
        cin>>ar[i];
    }
    vector<int> vs;
    for(i=0;i<v.size();i++){
        if(mp.find(v[i])==mp.end()){
            mp[v[i]]++;
        }
    }
    for(i=0;i<ar.size();i++){
        if(mp[ar[i]]==1){
            mp[ar[i]]++;
        }
    }
    for(auto it : mp){
        if(it.second==2){
            vs.push_back(it.first);
        }
    }
    for(i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }
}
