#include <iostream>
using namespace std;
int main() {
    double num1, num2, result;
    char operation;
    bool error = false;

    cout << "Введите 1 число: ";
    cin >> num1;

    cout << "Введите 2 число: ";
    cin >> num2;

    cout << "Введите операцию: ";
    cin >> operation;

    switch (operation) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Ошибка: деление на ноль" << endl;
                error = true;
            }
            break;
        default:
            cout << "Ошибка: неизвестная операция" << endl;
            error = true;
    }
    if (!error) {
        cout << "Результат: " << result << endl;
    }

    return 0;
}