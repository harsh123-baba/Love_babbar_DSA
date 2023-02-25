#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int i = 1;
    //approch 1
    // while(i<=n){
    //     int j = 1;
    //     int val=i;
    //     while(j<=i){
    //         cout<<val<<" ";
    //         val --;
    //         j++;
    //     }
    //     i++;
    //     cout<<endl;
    // }


    //approch2
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout<<i-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }

}