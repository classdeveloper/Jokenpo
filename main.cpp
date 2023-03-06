#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>

int32_t main(int32_t, char**) {

    std::string tipo;
    int tentativas;

    std::string list[3]{
            "pedra", "papel", "tesoura"
    };

    std::srand(std::time(nullptr));

    // std::cout << "bot: " << list[std::rand() % 3] << std::endl;

    std::cout << "Bem-vindo ao JOKENPO!" << std::endl;

    std::cout << "Digite um tipo: ";
    std::cin >> tipo;


    while (tipo != list[std::rand() % 3]) {

        std::cout << "Voce errou tente novamente: ";
        std::cin >> tipo;

        tentativas++;

    }

    std::cout << "Voce acertou em " << tentativas << " tentativas";

}