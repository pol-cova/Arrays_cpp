//
//  ex1-numero-hijos.cpp
//
//  Created by Paul Contreras on 20/01/24.
//
//
// Explicacion del ejercicio
/*
 Realiza un programa que ingrese desde el teclado el numero de hijos de 15 usuarios (cada usuario llenará su información independiente), al final ya que se hayan capturado las 15 casillas en un arreglo, dsplegar en pantalla el numero total de hijos de todos los usuarios
 */

// Importar libreria estandar
#include <iostream>
using namespace std;

int main(){
    // Definir el array, y el acumulador
    int NumHijos[15], TotalHijos=0;
    
    /*
     Ciclo For para capturar los 15 datos, y sumar el dato
     al acumulador
     */
    for (int i=0; i<15; ++i){
        // Imprimir mensaje para el usuario
        cout << "Usuario " << i+1 << " ingrese cantidad de hijos: ";
        // Leer input del usuario
        cin >> NumHijos[i];
        // Agregar el input al acumulador
        TotalHijos += NumHijos[i];
    }
    // Imprimir el total del acumulador al final del ciclo
    cout << "El numero total de hijos es: " << TotalHijos << endl;
    
    return 0;
}
 
