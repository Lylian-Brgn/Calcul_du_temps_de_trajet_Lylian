/**
 * Lylian Bourgin
 * labo Calcul du temps de trajet
 * 25.09.2026
 * v 1.1 Ajout de commentaire et correction de certain type
 */
#include <iostream>
#include <cmath>
#include <windows.h>

int main() {

    
    SetConsoleOutputCP(CP_UTF8); // Forcer la console à être en UTF8 pour éviter des problèmes d'affichage
    SetConsoleCP(CP_UTF8); // Forcer la console à être en UTF8 pour éviter des problèmes d'affichage

    const float dx = 3.; // distance en km
    const float dy = 10.; // distance en km

    const float s1 = 5.; // vitesse en km/h
    const float s2 = 2.; // vitesse en km/h

    float l1 = 0; // distance renseigné par l'utilisateur

    do {
        std::cout << "Veuillez mettre la distance que vous voulez pour la route 1 ";
        std::cin >> l1;

    }while ((l1 > dy) && !(l1 >= 0));


    const float coter_a = dy -l1;
    const float& coter_b = dx;

    const float hypotenus = sqrt(pow(coter_a,2) + pow(coter_b,2));

    const float temps_route_a = l1 / s1;
    const float temps_route_b = hypotenus / s2;
    const float temps_total = temps_route_a + temps_route_b;

    std::cout << "le rebots à pris " << temps_total << " heures pour récupérer l'objet" << std::endl;

    return 0;
}