#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    
    int a = 0, b = 1;
    for (int i = 2; i <= n; i++) {
        int temp = b;
        b = a + b;
        a = temp;
    }
    return b;
}

int main() {
    int n;
    cout << "Digite o valor de N: ";
    cin >> n;
    cout << "O valor na posição " << n << " da sequência de Fibonacci é: " << fibonacci(n) << endl;
    return 0;
}
