#include <iostream>

typedef struct hero {
    std::string name;
    int victorys;
    int defeats;
} Hero;

Hero newHero(void);
int sub(int, int);
std::string classification(int);

int main(void) {

    std::cout << "======= CLASSIFICACAO DO HEROI =======\n";
    Hero hero = { newHero() };
    int balance = { sub(hero.victorys, hero.defeats) };
    
    std::cout << "O Heroi tem saldo de " << balance << " vitorias e esta no nivel " << classification(balance) << ".\n";

    return 0;
}

Hero newHero(void) {
    Hero hero;

    std::cout << "Nome do Heroi: ";
    std::getline(std::cin, hero.name);

    std::cout << "Vitorias: ";
    std::cin >> hero.victorys;

    std::cout << "Derrotas: ";
    std::cin >> hero.defeats;

    return hero;
}

int sub(int value1, int value2) {
    return value1 - value2;
}

std::string classification(int balance) {
    if (balance <= 10) {
        return "Ferro";
    }

    if (balance <= 20) {
        return "Bronze";
    }

    if (balance <= 50) {
        return "Prata";
    }

    if (balance <= 80) {
        return "Ouro";
    }

    if (balance <= 90) {
        return "Diamante";
    }

    if (balance <= 100) {
        return "Lendario";
    }

    return "Imortal";
}

