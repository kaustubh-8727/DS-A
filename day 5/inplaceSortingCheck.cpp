#include <bits/stdc++.h>

using namespace std;
int main(){
    int i,j,n,s=0;
    cin>>n;
    vector<int> v(n);
    vector<int> ar;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    ar=v;
    sort(v.begin(),v.end());
    for(i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<v.size();i++){
        if(ar[i]!=v[i]){
            s++;
        }
    }
    cout<<s;
}
