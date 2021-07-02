#include <bits/stdc++.h>

using namespace std;
int x=0;
void solve(vector<int>& v,int k,int n){
    x=x+n;
    for(int i=k;i<v.size();i++){
        solve(v,i+1,n^v[i]);
    }
}
int main(){
    int i,j,n;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<v.size();i++){
        solve(v,i+1,v[i]);
    }
    cout<<x;
}
