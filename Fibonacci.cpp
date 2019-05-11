//
// Created by steven on 10/05/19.
//

#include "Fibonacci.h"
/**
*Algoritmo de Fibonacci, implementado con programacion dinamica
 * de tal manera que no se debe repetir tantas veces el algoritmo
 * para valores iguales, ya que en este caso se tiene una lista con los
 * datos de iteracion, incialmente la lista comienza con 0 y 1, luego
 * en cada iteracion se utilizan los numeros ya obtenidos en las iteraciones anteriores
 * para realizar el calculo de Fibonacci sin tener que repetir un calculo realizado y 
 * asi obtener el valor de Fibonacci para un n determinado
*/

int Fibonacci::fibonacciPD(int num) {
    if(num <= 0){
        cout << "numero invalido";
    }else{
        int f[num + 1];
        f[0] = 0;
        f[1] = 1;
        for (int i = 2; i < num +1 ; i++) {
            f[i] = f[i-1] + f [i-2];
        }
        return f[num];
    }
}
