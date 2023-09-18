#include <iostream>
using namespace std;
int main()
{
    float num1, num2;
    char op;

    // Input
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform the calculation based on the operator
    float result;
    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':

        result = num1 / num2;

        break;
    default:
        cout << "Error: Invalid operator." << endl;
        return 1; // Exit with an error code
    }

    // Output the result
    cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;

    return 0;
}
