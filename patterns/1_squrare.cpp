// in each and every problem i is for row
// j is for col



#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    //row
    int i = 1;
    while (i <= n)
    {
        //column
        int j = 1;
        while(j<=n){
            cout<<"* ";
            j = j+1;
        }
        cout<<endl;
        i=i+1;
    }
}