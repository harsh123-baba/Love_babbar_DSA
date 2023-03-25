#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swap(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n, 0);
    for(int i =0;i<n;i++){
        cin>>v[i];
    }
    for(int i = 1; i<n; i=i+2){
        swap(v[i], v[i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}