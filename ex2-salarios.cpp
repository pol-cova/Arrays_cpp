//
//  ex2-salarios.cpp
//
//  Created by Paul Contreras on 21/01/24.
//
//
// Explicacion del ejercicio
/*
 Realiza un programa que permita permita ingresar  seis números flotantes (puede ser float o double) y que al final despliegue los valores capturados; El nombre ó identificador del arreglo será: Salarios.
 */

// Importar libreria estandar
#include <iostream>
using namespace std;

int main(){
    // Definir el array como float
    float Salarios[6];
    
    // Ciclo For para capturar los 6 datos
    for(int i=0;  i<6; ++i){
        // Imprimir mensaje para el usuario
        cout << "Ingrese el salario " << i+1 << " : ";
        // Leer input del usuario
        cin >> Salarios[i];
    }
    // Imprimir salarios ingresados
    cout << " Salarios ingresados " << endl;
    // Ciclo For para imprimir los datos
    for(int i=0; i<6; ++i){
        // Imprimir cada dato
        cout << "Salario " << i+1 << " : " << Salarios[i] << endl;
    }
    
    return 0;
}
