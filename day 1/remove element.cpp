#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n,k,key;
    cin>>n;
    cin>>key;
    vector<int> v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=v.size()-1,c=0,t;
    while(l<=r){
        if(v[l]==key){
            t=v[l];
            v[l]=v[r];
            v[r]=t;
            r--;
            c++;
            n--;
        }
        else{
            l++;
        }
    }
    k=n;
    for(i=0;i<k;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
