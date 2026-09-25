#include <iostream>
#include <cmath>
#include <windows.h>

int main() {

    
    SetConsoleOutputCP(CP_UTF8); // Forcer la console à être en UTF8 pour éviter des problèmes d'affichage
    SetConsoleCP(CP_UTF8); // Forcer la console à être en UTF8 pour éviter des problèmes d'affichage

    const int dx = 3; // distance en km
    const int dy = 10; // distance en km

    const int s1 = 5; // vitesse en km/h
    const int s2 = 2; // vitesse en km/h

    int l1 = 0; // distance renseigné par l'utilisateur

    do {
        std::cout << "Veuillez mettre la distance que vous voulez pour la route 1 ";
        std::cin >> l1;

    }while ((l1 > dy) && !(l1 >= 0));


    const int coter_a = dy -l1;
    const int& coter_b = dx;

    const double hypotenus = sqrt(pow(coter_a,2) + pow(coter_b,2));

    const double temps_route_a = l1 / s1;
    const double temps_route_b = hypotenus / s2;
    const double temps_total = temps_route_a + temps_route_b;

    std::cout << "le rebots à pris " << temps_total << " heures pour récupérer l'objet" << std::endl;

    return 0;
}