#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ar=v;
    vector<int> vs;
    unordered_map<int,int> mp;
    sort(v.begin(),v.end()); 
    for(i=0;i<v.size();i++){
        if(mp.find(v[i])==mp.end()){
            mp[v[i]]=i;
        }
    }
    for(i=0;i<ar.size();i++){
        vs.push_back(mp[ar[i]]);
    }
    for(i=0;i<vs.size();i++){
        cout<<vs[i]<<" ";
    }
}
