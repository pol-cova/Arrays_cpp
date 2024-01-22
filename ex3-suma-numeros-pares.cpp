//
//  ex3-suma-numeros-pares.cpp
//
//  Created by Paul Contreras on 21/01/24.
//
//
// Explicacion del ejercicio
/*
 Hacer un programa que pida y llene desde el teclado 7 números enteros (con ciclo) y que al final despliegue la suma total, pero de solamente los números pares introducidos en el arreglo.
 */

// Importar libreria estandar
#include <iostream>
using namespace std;

int main(){
    // Definimos el array, y el acumulador
    int Numbers[7], SumNumbers = 0;
    
    // Ciclo For para capturar los 7 datos
    for(int i=0; i<7; ++i){
        // Imprimir mensaje para el usuario
        cout << "Ingresa un numero entero: ";
        // Leer input del usuario
        cin >> Numbers[i];
        
        /* If ternario para checar numeros pares y sumarlo al acumulador
        */
        Numbers[i] % 2 == 0 ? SumNumbers += Numbers[i] : SumNumbers += 0;
    }
    // Imprimir la suma total de numeros pares
    cout << "La suma total de los numeros pares ingresados es: " << SumNumbers << endl;
    
    return 0;
}
