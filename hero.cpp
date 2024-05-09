#include <iostream>

typedef struct hero {
    std::string name;
    long int level;
} Hero;

int main(void) {

    Hero hero;
    std::string level;

    std::cout << "Nome do Heroi: ";
    std::getline(std::cin, hero.name);

    std::cout << "Nivel do Heroi: ";
    std::cin >> hero.level;

    std::cout << "O Heroi de nome: " << hero.name << "esta no nivel: " << hero.level << '\n';

    return 0;
}

