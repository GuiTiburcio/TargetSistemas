#include <iostream>
#include <string>
#include <windows.h> // Inclui a biblioteca Windows.h para manipulação do console
#include <locale.h> // Inclui a biblioteca locale.h

int main() {
    int INDICE = 13, SOMA = 0, K = 0;

    // Loop enquanto K for menor que INDICE
    while (K < INDICE) {
        K = K + 1;  // Incrementa K
        SOMA = SOMA + K;  // Adiciona K à SOMA
    }

    // Imprime o valor final da SOMA
    std::cout << "O Valor da SOMA: " << SOMA << std::endl;

    return 0;
}
