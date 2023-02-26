//    1
//   22
//  333
 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int row = 1;
    while(row <= n){
        int spaces = n-row;
        while(spaces--){
            cout<<" ";
        }
        int col = 1;
        while(col <= row){
            cout<<row;
            col++;   
        }
        row++;
        cout<<endl;

        
    }
}

