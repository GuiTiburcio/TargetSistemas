#include <iostream>
#include <string>
#include <windows.h> // Inclui a biblioteca Windows.h para manipulação do console
#include <locale.h> // Inclui a biblioteca locale.h

// Função para inverter uma string
std::string inverteString(const std::string& str) {
    std::string strInvertida = "";
    // Itera sobre a string de trás para frente
    for (int i = str.length() - 1; i >= 0; i--) {
        strInvertida += str[i]; // Adiciona cada caractere invertido à nova string
    }
    return strInvertida;
}

int main() {
    // Configura o console para exibir caracteres especiais corretamente
    SetConsoleOutputCP(CP_UTF8);

    std::string texto;
    std::cout << "Informe uma string: ";
    // Obtém a entrada do usuário
    std::getline(std::cin, texto);

    // Inverte a string fornecida chamando a função inverteString
    std::string textoInvertido = inverteString(texto);
    // Exibe a string invertida
    std::cout << "String invertida: " << textoInvertido << std::endl;

    return 0;
}
