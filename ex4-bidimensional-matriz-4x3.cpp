//
//  ex4-bidimensional-matriz-4x3.cpp
//
//  Created by Paul Contreras on 21/01/24.
//
//
//
// Explicacion del ejercicio
/*
 Hacer un programa que llene un arreglo bidimensional de 4x3 (4 filas por 3 columnas), el llenado sera desde el teclado y con ciclo, y aceptara números con un dígito y dos dígitos, pero el desplegado lo tiene que hacer bien justificado, simulando la matriz, ejemplo: se capturaron los números (3, 34, 56 ,93 , 4, 7, 14, 3 y 6) y los debe de desplegar así, (los números de menos de 2 dígitos les tiene que poner un cero a la izquierda)
 */

// Importar libreria estandar
#include <iostream>
// Importa libreria para manipular inputs y outputs
#include <iomanip>
using namespace std;

int main(){
    // Definimos el array bidimensional forma mxn
    // 4 filas - 3 columnas
    int Array[4][3];
    
    // Ciclo For anidado para capturar los datos
    for(int i=0; i<4; ++i){
        for(int j=0; j<3; ++j){
            // Mensaje para el usuario
            cout << "Ingresa un numero: ";
            // Leer numero entero
            cin >> Array[i][j];
        }
    }
    
    // Ciclo For anidado para imprimir los datos
    for(int i=0; i<4; ++i){
        for(int j=0; j<3; ++j){
            /*
             Hay diversas maneras, usando comparadores (if)
             Yo elegi la funcion setw que se usa para para
             determinar el numero de caracteres del ancho en
             este caso 2, y setfill funcion para rellenar
             con un caracter ese espacio en este caso 0,
             asi que si el ancho de el numero es menor a 2
             rellena con 1 cero.
             */
            cout << "[" << setw(2) << setfill('0') << Array[i][j] << "]";
        }
        // Imprime un salto de linea para formar la matriz 
        cout << endl;
    }
    
    
    return 0;
}
