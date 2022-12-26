// Create a calculator using switch statement to perform addition, subtraction, multiplication
// and division.
#include <iostream>

using namespace std;
int main()
{
    char operators;
    float a,b;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operators;
    cout << "Enter two numbers: " << endl;
    cin >>a>>b;
    switch (operators)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b;
        break;
    case '/':
        cout << a << " / " << b << " = " << a / b;
        break;
    default:
        cout << "Error! The operator is not correct";
        // operator doesn't match with any case constant (+, -, *, /)
        break;
    }
    return 0;
}