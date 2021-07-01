#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    cin>>n;
    vector<int> v(n);
    vector<int> ar(n);
    vector<int> vs;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<n;i++){
        cin>>ar[i];
    }
    for(i=0;i<n;i++){
        vs.insert(vs.begin()+ar[i],v[i]);
    }
    for(i=0;i<n;i++){
        cout<<vs[i]<<" ";
    }
}
