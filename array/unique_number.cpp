#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i  = 0;i<n;i++){
            cin>>v[i];
        }
        int x = 0;
        for(int i = 0; i<n; i++){
            x = x^v[i]; 
        }
        cout<<x;
    }
}