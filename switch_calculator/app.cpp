#include <iostream>
using namespace std;

int main()
{
    cout << "===================================\n";
    cout << "======= Simple Calculator : =======\n";
    cout << "===================================\n";

    cout << "===================================\n";
    cout << "== Choose your operator symbol : ==\n";
    cout << "== Addition          =>     +    ==\n";
    cout << "== Subtraction       =>     -    ==\n";
    cout << "== Multiplication    =>     *    ==\n";
    cout << "== Divison           =>     /    ==\n";
    cout << "== Modulo            =>     %    ==\n";
    cout << "===================================\n";

    int num_one, num_two;
    char op;

    cout << "Enter a number: ";
    cin >> num_one;
    cout << "Enter your operator symbol: ";
    cin >> op;
    cout << "Enter another number: ";
    cin >> num_two;

    switch (op)
    {
    case '+':
        cout << "The result is: " << num_one + num_two;
        break;
    case '-':
        cout << "The result is: " << num_one - num_two;
        break;
    case '*':
        cout << "The result is: " << num_one * num_two;
        break;
    case '/':
        cout << "The result is: " << num_one / num_two;
        break;
    case '%':
        cout << "The result is: " << num_one % num_two;
        break;
    
    
    default:
    cout << "The operator symbol you entered is wrong!!!\n";
        break;
    }

    return 0;
}