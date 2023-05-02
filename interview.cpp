#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string solve(vector<int> v, int timeTaken){
    if(timeTaken>120 || v.size() != 8){
        return "disqualified";
    }
    for(int i = 0; i<v.size(); i++){
        if(i>=0 && i<=1){
            if(v[i] > 5){
                return "disqualified";
            }
        }
        else if(i>=2 && i<=3){
            if(v[i] > 10){
                return "disqualified";
            }
        }
        else if(i>=4 && i<=5){
            if(v[i] > 15){
                return "disqualified";
            }
        }
        else {
            if(v[i] > 20){
                return "disqualified";
            }
        }
    }
    return "qualified";
}

int main(){
    // int n;
    // cin>>n;    
    vector<int> v(8);
    for(int i = 0; i<8; i++){
        cin>>v[i];
    }
    int timeTaken;
    cin>>timeTaken;
    cout<<solve(v, timeTaken);
}