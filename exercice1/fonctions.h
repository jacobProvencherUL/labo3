/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cFiles/file.h to edit this template
 */

/* 
 * File:   fonctions.h
 * Author: etudiant
 *
 * Created on February 1, 2026, 8:45 a.m.
 */

#ifndef FONCTIONS_H
#define FONCTIONS_H

#include <array>

constexpr int NOMBRE_LANCES{10};
constexpr int NOMBRE_FACES{6};

int jet_de();

void lances_de(std::array<int, NOMBRE_LANCES>& p_lances);

void calcul_frequences(
    std::array<int, NOMBRE_LANCES>& p_lances,
    std::array<int, NOMBRE_FACES>& p_frequences
);

float calculer_moyenne(std::array<int, NOMBRE_FACES>& p_frequences);

void afficher_lances(std::array<int, NOMBRE_LANCES>& p_lances);
void afficher_frequences(std::array<int, NOMBRE_FACES>& p_frequences);



#endif /* FONCTIONS_H */

