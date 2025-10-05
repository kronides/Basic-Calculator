#include <iostream>
using namespace std;

int main() {
    int a, b;
    string decisions;
    char again;

    do {
        cout << "********************************************\n";
        cout << "\nWelcome to Basic Calculator!\n";
        cout << "\nOptions: Addition, Subtraction, Multiplication, Division\n";
        cout << "\n********************************************\n";

        cout << "Input: ";
        cin >> decisions;

        if (decisions == "Addition" || decisions == "addition" || decisions == "Add" || decisions == "add") {
            cout << "Enter Value (a): ";
            cin >> a;
            cout << "Enter Value (b): ";
            cin >> b;
            cout << "Output: " << (a + b) << endl;
        }
        else if (decisions == "Subtraction" || decisions == "subtraction" || decisions == "subtract" || decisions == "Subtract") {
            cout << "Enter Value (a): ";
            cin >> a;
            cout << "Enter Value (b): ";
            cin >> b;
            cout << "Output: " << (a - b) << endl;
        }
        else if (decisions == "Division" || decisions == "division" || decisions == "divide" || decisions == "Divide") {
            cout << "Enter Value (a): ";
            cin >> a;
            cout << "Enter Value (b): ";
            cin >> b;
            if (b != 0)
                cout << "Output: " << (a / b) << endl;
            else
                cout << "Error: Division by Zero is Undefined" << endl;
        }
        else if (decisions == "Multiplication" || decisions == "multiplication" || decisions == "multiply" || decisions == "Multiply") {
            cout << "Enter Value (a): ";
            cin >> a;
            cout << "Enter Value (b): ";
            cin >> b;
            cout << "Output: " << (a * b) << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }

        cout << "\nWould you like to calculate again? (Y/N): ";
        cin >> again;

    } while (again == 'Y' || again == 'y');

    cout << "Thanks for using the calculator. Goodbye!\n";
    return 0;
}
