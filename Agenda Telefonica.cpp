// Agenda Telefonica.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

// Definirea structurii pentru un contact din agenda telefonică
struct Contact {
    std::string nume;
    std::string numar_telefon;
};

int main() {
    // Declarație și inițializare a unui array de Contact pentru a stoca informațiile
    Contact agenda[3];

    // Permiterea utilizatorului să introducă date pentru 3 contacte diferite
    for (int i = 0; i < 3; ++i) {
        std::cout << "Introduceti numele pentru contactul " << i + 1 << ": ";
        std::getline(std::cin, agenda[i].nume);
        std::cout << "Introduceti numarul de telefon pentru contactul " << i + 1 << ": ";
        std::getline(std::cin, agenda[i].numar_telefon);
    }

    // Afișarea tuturor contactelor la final
    std::cout << "\nContactele din agenda telefonica sunt:\n";
    for (int i = 0; i < 3; ++i) {
        std::cout << "Contactul " << i + 1 << ":\n";
        std::cout << "Nume: " << agenda[i].nume << std::endl;
        std::cout << "Numar de telefon: " << agenda[i].numar_telefon << std::endl << std::endl;
    }

    return 0;
}
