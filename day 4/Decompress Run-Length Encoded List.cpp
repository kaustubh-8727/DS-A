#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,freq,val;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    vector<int> ar;
    for(i=0;i<v.size();i++){
        if((2*i)<v.size()){
            freq=v[2*i];
            val=v[2*i+1];
            for(j=0;j<freq;j++){
                ar.push_back(val);
            }
        }
        else{
            break;
        }
    }
    for(i=0;i<ar.size();i++){
        cout<<ar[i]<<" ";
    }
}
