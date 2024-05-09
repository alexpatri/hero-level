#include <iostream>

typedef struct hero {
    std::string name;
    long int level;
} Hero;

std::string classification(int);

int main(void) {

    Hero hero;

    std::cout << "======= CLASSIFICACAO DO HEROI =======\n";
    std::cout << "Nome do Heroi: ";
    std::getline(std::cin, hero.name);

    std::cout << "Nivel do Heroi: ";
    std::cin >> hero.level;

    std::cout << "O Heroi de nome: " << hero.name << " esta no nivel: " << classification(hero.level) << '\n';

    return 0;
}

std::string classification(int level) {
    if (level <= 1000) {
        return "Ferro";
    }

    if (level <= 2000) {
        return "Bronze";
    }

    if (level <= 5000) {
        return "Prata";
    }

    if (level <= 7000) {
        return "Ouro";
    }

    if (level <= 8000) {
        return "Platina";
    }

    if (level <= 9000) {
        return "Ascedente";
    }

    if (level <= 10000) {
        return "Imortal";
    }

    return "Radiante";
}
