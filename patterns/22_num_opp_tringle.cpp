// 1111
//  222
//   33
//    4

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        int space = i-1;
        while(space--){
            cout<<" ";
        }   
        int col = 1;
        while(col<n-i+2){
            cout<<i;
            col++;
        }
        i++;
        cout<<endl;
    }
}
