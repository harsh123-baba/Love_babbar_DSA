#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int first_occur(vector<int> v, int key){
    int s = 0, ans = 0;
    int e = v.size()-1;
    while(s<e){
        int mid = s+(e-s)/2;
        if(v[mid]==key){
            ans = mid;
            e = mid-1;
        }
        else if(v[mid] > key){
            e= mid-1;
        }
        else{
            s = mid+1;
        }
    }
    return ans;
}
int last_occur(vector<int>v, int key){
    int s = 0, ans = 0;
    int e = v.size()-1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(v[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(v[mid] > key){
            e = mid-1;
        }
        else {
            s = mid+1;
        }
    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    int key;
    cin>>key;
    cout<<first_occur(v, key);
    cout<<" ";
    cout<<last_occur(v, key);
}