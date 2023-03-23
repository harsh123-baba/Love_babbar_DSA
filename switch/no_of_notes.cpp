#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int totalAmount;
    cout<<"Enter money to return ";
    cin>>totalAmount;

    int hundereds = 0;
    int fifties = 0;
    int twenties = 0;
    int ones = 0;
    
    switch(totalAmount>=100){
        case 1:
            // cout<<"ksnckld";
            hundereds = totalAmount/100; 
            totalAmount -= hundereds*100;
    }
    switch(totalAmount >= 50){
        case 1:
            // cout<<"klmnvkmvdf";
            fifties = totalAmount/50;
            totalAmount -= fifties*50;
    }
    switch(totalAmount >= 20){
        case 1:
            twenties = totalAmount/20;
            totalAmount -= twenties * 20;
    }
    switch(totalAmount>=1){
        case 1:
            ones = totalAmount;
            totalAmount=0;
    }
    cout<<"100s "<<hundereds<<endl;
    cout<<"50s "<<fifties<<endl;
    cout<<"20s "<<twenties<<endl;
    cout<<"1s "<<ones<<endl;
}