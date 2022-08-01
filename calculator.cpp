# include <iostream>
using namespace std;

int main() {

    //Define the type of variables, num1 and num2 are float. Limitation to 2 numbers op
    char op;
    float num1, num2;

    //List of available operators for this calculator
    cout << "Enter operator: +, -, *, /:";
    cin >> op;

    cout << "Enter two operands: ";
    cin >> num1 >> num2;

    switch(op) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;

        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        
        defult:
            // If the operator is other than +, -, * or /. The error message will occur
            cout << "Error! operator is undefine";
            break;
    }

    return 0;
}