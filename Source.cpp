#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

void printFibonacci(int n) {
    for (int i = 0; i < n; ++i) {
        cout << fibonacci(i) << " ";
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "rus");
    int n;
    cout << "Введите количество чисел Фибоначчи для вывода: ";
    cin >> n;
    cout << "Числа Фибоначчи: ";
    printFibonacci(n);
    return 0;
}
