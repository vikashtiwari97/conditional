// Write a program to print absolute value of a number entered by the user.
#include<iostream>

using namespace std;
int main(){
    int a;
    cout<<"Enter the value of a"<<endl;
    cin>>a;
    int c;
    if(a<0)
    {
        c=a*(-1);
    }
    cout<<"Absolute value is "<<c;
    return 0;
}