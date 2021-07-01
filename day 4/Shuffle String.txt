#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n;
    string s;
    cin>>n;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    cin>>s;
    string st;
    st.append(v.size(),'a');
    for(i=0;i<v.size();i++){
        st[v[i]]=s[i];
    }
    cout<<st;
}
