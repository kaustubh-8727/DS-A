#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,row,col,s=0,m=INT_MIN;
    cin>>row>>col;
    vector<vector<int>> v(row,vector<int>(col));
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            cin>>v[i][j];
        }
    }
    for(i=0;i<row;i++){
        s=0;
        for(j=0;j<col;j++){
            s=s+v[i][j];
        }
        m=max(m,s);
    }
    cout<<m;
}
