//
//  ex5-bidimensional-matriz-4x5.cpp
//
//  Created by Paul Contreras on 21/01/24.
//
//
//
// Explicacion del ejercicio
/*
 Hacer un programa que llene un arreglo bidimensional de 4x5 (4 filas por 5 columnas), el llenado sera desde el teclado y con ciclo, y aceptara números con un dígito, dos dígitos y 3 dígitos. y los desplegara similar al ejercicio 1, si se capturó un 3, pues desplegarlo así [003], si se capturó un 20, despelgarlo así [020], si se capturó un 4, desplegarlo así [004].
 */

// Importar libreria estandar
#include <iostream>
// Importa libreria para manipular inputs y outputs
#include <iomanip>
using namespace std;

int main(){
    // Definimos el array bidimensional forma mxn
    // 4 filas - 5 columnas
    int Array[4][5];
    
    // Ciclo For anidado para capturar los datos
    for(int i=0; i<4; ++i){
        for(int j=0; j<5; ++j){
            // Mensaje para el usuario
            cout << "Ingresa un numero: ";
            // Leer numero entero
            cin >> Array[i][j];
        }
    }
    
    // Ciclo For anidado para imprimir los datos
    for(int i=0; i<4; ++i){
        for(int j=0; j<5; ++j){
            /*
             Hay diversas maneras, usando comparadores (if)
             Yo elegi la funcion setw que se usa para para
             determinar el numero de caracteres del ancho en
             este caso 3, y setfill funcion para rellenar
             con un caracter ese espacio en este caso 0,
             asi que si el ancho de el numero es menor a 3
             rellena con 1 cero.
             */
            cout << "[" << setw(3) << setfill('0') << Array[i][j] << "]";
        }
        // Imprime un salto de linea para formar la matriz
        cout << endl;
    }
    
    
    return 0;
}
