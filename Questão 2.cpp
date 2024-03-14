#include <iostream>
#include <string>
#include <windows.h> // Inclui a biblioteca Windows.h para manipulação do console
#include <locale.h> // Inclui a biblioteca locale.h

bool pertenceFibonacci(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n) {
            return true;  // Retorna verdadeiro se N pertence à sequência de Fibonacci
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    return false;  // Retorna falso se N não pertence à sequência de Fibonacci
}

int main() {
    // Configura o console para exibir caracteres especiais corretamente
    SetConsoleOutputCP(CP_UTF8);

    int numero;
    std::cout << "Informe um número: ";
    std::cin >> numero;

    // Verifica se o número pertence à sequência de Fibonacci
    if (pertenceFibonacci(numero)) {
        std::cout << numero << " pertence à sequência de Fibonacci." << std::endl;
    } else {
        std::cout << numero << " não pertence à sequência de Fibonacci." << std::endl;
    }

    return 0;
}
