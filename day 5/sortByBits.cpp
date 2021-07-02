#include <bits/stdc++.h>
using namespace std;

int bin(int n)
{
    string s,v;
    int x,z=0,k=0,i;
    while(n!=0)
    {
        x=n%2;
        n=n/2;
        v=to_string(x);
        s=s+v;
    }
    cout<<s;
    reverse(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(s[i]=='1'){
        k++;
        }
    }
    return k;
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int> > bits;
    vector<int> v;
    vector<int> z;
    int k=0,x=0,j,i;
    for(i=0;i<arr.size();i++)
    {
        x = bin(arr[i]);
        bits.push_back({x,arr[i]});
    }
    sort(bits.begin(),bits.end());
    for(j=0;j<bits.size();j++)
    {
        z.push_back(bits[i].second);
    }
    for(i=0;i<z.size();i++){
        cout<<z[i]<<" ";
    }
}
