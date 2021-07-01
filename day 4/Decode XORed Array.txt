#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,freq,val,k;
    cin>>n>>k;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> res = {k};
    for (int i=0;i<v.size();i++){
        res.push_back(k ^= v[i]);
    }
    for(i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
}
