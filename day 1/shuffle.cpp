#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,k=0;
    cin>>n;
    vector<int> v(n);
    vector<int> ar(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int len=n;
    n=n/2;
    for(i=0;i<len;i++){
        if(i%2==0){
            ar[i]=v[k++];
        }
        else{
            ar[i]=v[n++];
        }
    }
    for(i=0;i<len;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
