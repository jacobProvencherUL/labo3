/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/file.cc to edit this template
 */

#include <iostream>
#include <array>
#include <cstdlib>
#include <ctime>

#include "fonctions.h"

using namespace std;

int jet_de() {
    return (rand() % NOMBRE_FACES) + 1;
}

void lances_de(array<int, NOMBRE_LANCES>& p_lances) {
    for (size_t i = 0; i < p_lances.size(); i++) {
        p_lances[i] = jet_de();
    }
}

void calcul_frequences(
        array<int, NOMBRE_LANCES>& p_lances,
        array<int, NOMBRE_FACES>& p_frequences) {

    // initialise toutes les valeurs a zero
    for (auto& element : p_frequences) {
        element = 0;
    }

    // calcul des frequences
    for (auto& dice_value : p_lances) {
        p_frequences[dice_value - 1]++;
    }

}

void afficher_lances(array<int, NOMBRE_LANCES>& p_lances) {
    cout << "Lances de des" << endl;
    for (auto& dice_value : p_lances) {
        cout << dice_value << endl;
    }
    cout << endl;
}

void afficher_frequences(array<int, NOMBRE_FACES>& p_frequences) {
    cout << "Faces Frequences" << endl;
    for (size_t i=0; i<p_frequences.size(); i++) {
        cout << i+1 << " " << p_frequences[i] << endl;
    }
    cout << endl;
}

float calculer_moyenne(array<int, NOMBRE_FACES>& p_frequences) {
    float result{1.0f};
    for (auto& dice_value : p_frequences) {
        result += dice_value;
    }
    return result / NOMBRE_FACES; 
}



