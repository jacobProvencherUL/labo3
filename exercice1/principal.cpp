/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on February 1, 2026, 8:44 a.m.
 */

#include <iostream>
#include "fonctions.h"

using namespace std;

/*
 * 
 */
int main() {
    
    srand(time(0));
    
    array<int, NOMBRE_LANCES> tableau_lances;
    lances_de(tableau_lances);
    
    cout << "On a tire les faces suivantes:" << endl;
    afficher_lances(tableau_lances);
    
    array<int, NOMBRE_FACES> tableau_frequences;
    cout << "Calcul des frequences..." << endl;
    calcul_frequences(tableau_lances, tableau_frequences);
    
    cout << "Voici les resultats!" << endl;
    afficher_frequences(tableau_frequences);
    
    cout << "Voici la moyenne de ces resultats:" << endl;
    cout << calculer_moyenne(tableau_frequences) << " "
            << "(ce resultat est inutile...)" << endl;
    

    return 0;
}

