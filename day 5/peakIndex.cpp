#include <bits/stdc++.h>

using namespace std;
int main(){
    int i,j,m=INT_MIN,c,n;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    for(i=0;i<v.size();i++){
        if(m<v[i]){
            c=i;
            m=v[i];
        }
    }
    cout<<c;
}
