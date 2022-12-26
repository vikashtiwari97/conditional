// Write a program to take input from user for Cost Price (C.P.) and Selling Price(S.P.) and
// calculate Profit or Loss.

#include<iostream>

using namespace std;
int main(){
    int sp,cp,amount;
    cout<<"What is the amout of Selling Price"<<endl;
    cin>>sp;
    cout<<"What is the amount of Cost Price"<<endl;
    cin>>cp;
    if(sp>cp)
    {
        amount=sp-cp;
        cout<<"The profit amount is "<<amount<<endl;
    }
    else
    {
        amount=cp-sp;
        cout<<"The loss amount is "<<amount;
    }
    return 0;
}