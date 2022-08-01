# include <iostream>
using namespace std;

int main() {

    char op;
    float num1, num2;

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