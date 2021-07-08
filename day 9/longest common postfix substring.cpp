#include <bits/stdc++.h>
using namespace std;

string solve(string s,string st){
    int i,j,l,a=s.size(),b=st.size();
    string str;
    l=min(a,b);
    for(i=0;i<l;i++){
        if(s[i]==st[i]){
            str=str+s[i];
        }
        else{
            break;
        }
    }
    return str;
}
int main()
{
    int i,j,n,m=INT_MAX;
    string s,st;
    cin>>n;
    vector<string> v;
    for(i=0;i<n;i++){
        cin>>st;
        reverse(st.begin(),st.end());
        v.push_back(st);
    }
    if(v.size()==1){
        cout<<v[0];
    }
    for(i=0;i<v.size()-1;i++){
        st=solve(v[i],v[i+1]);
        if(st.size()<m){
            m=st.size();
            s=st;
        }
    }
    reverse(s.begin(),s.end());
    cout<<s;
}
