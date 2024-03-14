#include <iostream>
#include <string>
#include <windows.h> // Inclui a biblioteca Windows.h para manipula��o do console
#include <locale.h> // Inclui a biblioteca locale.h

bool pertenceFibonacci(int n) {
    int a = 0, b = 1;
    while (a <= n) {
        if (a == n) {
            return true;  // Retorna verdadeiro se N pertence � sequ�ncia de Fibonacci
        }
        int temp = a;
        a = b;
        b = temp + b;
    }
    return false;  // Retorna falso se N n�o pertence � sequ�ncia de Fibonacci
}

int main() {
    // Configura o console para exibir caracteres especiais corretamente
    SetConsoleOutputCP(CP_UTF8);

    int numero;
    std::cout << "Informe um n�mero: ";
    std::cin >> numero;

    // Verifica se o n�mero pertence � sequ�ncia de Fibonacci
    if (pertenceFibonacci(numero)) {
        std::cout << numero << " pertence � sequ�ncia de Fibonacci." << std::endl;
    } else {
        std::cout << numero << " n�o pertence � sequ�ncia de Fibonacci." << std::endl;
    }

    return 0;
}
