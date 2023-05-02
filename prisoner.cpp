#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void switchCells(vector<int>& v){
    for(int i = 0; i<v.size(); i++)
    {
        v[i] = v[i] == 0?1:0;
    }
}


int solve(vector<int> v){
    if(v.size()==0 || v[0] == 0){
        return 0;
    }
    switchCells(v);
    int relased = 1;
    for(int i = 0; i<v.size(); i++){
        if(v[i] == 1){
            switchCells(v);
            relased++;
        }
    }
    return relased;
}


int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }

    cout<<solve(v);
    
}