/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: etudiant
 *
 * Created on February 2, 2026, 8:29 a.m.
 */

#include <iostream>
#include "fonctions.h"
#include <cstdlib>

using namespace std;

/*
 * 
 */
int main() {

    Matrice matriceA;
    Matrice matriceB;
    Matrice matriceC;
    
    cout << "Veuillez remplir les matrices " << LIGNES << "x" << COLONNES << endl;
    saisirMatrice(matriceA, matriceB);
    
    cout << "Voici la matrice A" << endl;
    afficheMatrice(matriceA);
    
    cout << "Voici la matrice B" << endl;
    afficheMatrice(matriceB);
    
    cout << "Calculons la matrice somme" << endl;
    somme(matriceA, matriceB, matriceC);
    cout << "Voici le resultat" << endl;
    afficheSomme(matriceC);
    
    cout << "Calculons la matrice produit" << endl;
    multiplication(matriceA, matriceB, matriceC);
    cout << "Voici le resultat" << endl;
    afficheMultiplication(matriceC);
    
    return 0;
}

