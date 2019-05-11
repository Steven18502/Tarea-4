//
// Created by steven on 10/05/19.
//

#include "Genetico.h"

/**
 * Algoritmo genetico, combina dos genes de un padre y una madre
 * genera un nuevo individuo con una combinacion de genes de la madre y el padre
 * puede hacerse de varias maneras, en este caso toma la mitad del gen de uno y la
 * mitad del gen del otro y los combina en un nuevo gen, pueden darse mutaciones
 * para esto se utiliza un numero aleatoria y en el caso que este numero de un valor
 * concreto se realiza la mutacion, en este caso se suma 1 al valor del gen especifico
 */

vector<int> Genetico::rep(vector<int> padre, vector<int> madre) {
    vector<int> hijo;
    for (int i = 0; i < padre.size(); i++) {
        int mutacion = rand()%6;
        if(i<padre.size()/2){
            hijo.push_back(padre.at(i));
        }else if (i>=padre.size()/2){
            hijo.push_back(madre.at(i));
        }else if (mutacion = 1){
            hijo.at(i)=hijo.at(i)+1;
        }
    }return hijo;
}
