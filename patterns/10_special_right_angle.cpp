#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;

    while(i<=n){
        int j = 1;
        // int val=i;
        while(j<=i){
            cout<<j+i-1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}