/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include "fonctions.h"
#include <array>

using namespace std;

void saisirMatrice(Matrice& p_matA, Matrice& p_matB) {
    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++) {
            int numA;
            int numB;

            cout << "Entrez deux nombres entiers: " << endl;
            cin >> numA >> numB;

            p_matA[i][j] = numA;
            p_matB[i][j] = numB;
        }
    }
}

void somme(const Matrice& p_matA, const Matrice& p_matB, Matrice& p_matC) {

    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++){
            p_matC[i][j] = 0;
        }
    }

    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++) {
            p_matC[i][j] = p_matA[i][j] + p_matB[i][j];
        }
    }
}

void multiplication(const Matrice& p_matA, const Matrice& p_matB, Matrice& p_matC) {

    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++){
            p_matC[i][j] = 0;
        }
    }

    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++) {
            p_matC[i][j] = p_matA[i][j] * p_matB[i][j];
        }
    }
}

void afficheMatrice(const Matrice& p_mat) {
    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++) {
            cout << p_mat[i][j] << " ";
        }
        cout << endl;
    }
}

void afficheSomme(const Matrice& p_matC) {
    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++) {
            cout << p_matC[i][j] << " ";
        }
        cout << endl;
    }
}

void afficheMultiplication(const Matrice& p_matC) {
    for (size_t i = 0; i < LIGNES; i++) {
        for (size_t j = 0; j < COLONNES; j++) {
            cout << p_matC[i][j] << " ";
        }
        cout << endl;
    }
}

