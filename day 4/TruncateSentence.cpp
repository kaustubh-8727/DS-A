#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,k;
    string s,st;
    cin>>k;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i]==' '){
            k--;
            if(k==0){
                st.append(s,0,i);
                cout<<st;
                return 0;
            }
        }
    }
    k--;
    if(k==0){
        st.append(s,0,i);
    }
    cout<<st;
    return 0;
}
