// Write a program to print positive number entered by the user, if user enters a negative
// number, it is skipped.
#include<iostream>

using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"The positive number is "<<a<<endl;
    }
    else
    {
        cout<<"Number is negative it can skipped";
    }
    return 0;
}