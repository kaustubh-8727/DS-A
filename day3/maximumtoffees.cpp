#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,k;
    cin>>n>>k;
    vector<int> v(n);
    vector<string> ar;
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int m=*max_element(v.begin(), v.end());
    for(i=0;i<n;i++){
        if(v[i]+k>=m){
            ar.push_back("true");
        }
        else{
            ar.push_back("false");
        }
    }
    for(i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
