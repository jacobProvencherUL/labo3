/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   fonctions.h
 * Author: etudiant
 *
 * Created on February 2, 2026, 8:29 a.m.
 */

#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <array>

constexpr int COLONNES{2};
constexpr int LIGNES{2};

using Matrice = std::array<std::array<int, COLONNES>, LIGNES>;

void saisirMatrice(
    Matrice& p_matA,
    Matrice& p_matB
);

void somme(
    const Matrice& p_matA,
    const Matrice& p_matB,
    Matrice& p_matC
);

void multiplication(
    const Matrice& p_matA,
    const Matrice& p_matB,
    Matrice& p_matC
);

void afficheMatrice(const Matrice& p_mat);
void afficheSomme(const Matrice& p_matC);
void afficheMultiplication(const Matrice& p_matC);

#endif /* FONCTIONS_H */

