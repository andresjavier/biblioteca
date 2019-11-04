//
//  trunca.c
//  comandos
//
//  Created by Andres Iglesias Aguilera on 04/11/2019.
//  Copyright © 2019 Andres Iglesias Aguilera. All rights reserved.
//
// Este código sencillamente segmenta una cadena de caracteres
// En una matriz de sus segmentos, segmentos definidos por el segundo argumento,
// Que señala por dónde se deben cortar los segmentos.
// Finalmente, imprime la matriz de segmentos, a razón de uno por línea de texto.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "headers/funciones.h"

int main(int argc, const char * argv[]) {
   
    if ( argc != 3 ) {
        puts("Error en el número de argumentos.");
        return -1;
    } else if ( strlen(argv[2]) != 1 ) {
        puts("El segundo arguento debe ser un solo carácter.");
        return -1;
    }
    
    const char *Entrada = argv[1];
    const char Separador = (const char) *argv[2];
    unsigned long NLineas = Ocurrencias(Entrada, Separador) + 1;
    unsigned long IndiceMatriz = 0,
           IndiceEntrada = 0, SubIndice, Longitud = strlen(Entrada);
    char Salida[NLineas][Longitud];

    if (NLineas == 0 ) {
        puts(Entrada);
        return 0;
    } else if ( NLineas == Longitud )
        return 0;
   
    
    for ( unsigned long a = 0; a < NLineas; a++ )
        memset(&Salida[a], 0, Longitud);  // Se inicializa la matriz a 0
    
    for ( IndiceEntrada = 0; IndiceEntrada < Longitud; IndiceMatriz++, IndiceEntrada++)
        for (SubIndice = 0; Entrada[IndiceEntrada] != Separador; ++IndiceEntrada, SubIndice++)
            Salida[IndiceMatriz][SubIndice] = Entrada[IndiceEntrada];
        
    for ( IndiceMatriz = 0; ( ( IndiceMatriz < NLineas ) ); IndiceMatriz++)  // Finalmente, se imprimen las filas de la matriz
        if ( *Salida[IndiceMatriz] ) printf("%s\n", Salida[IndiceMatriz]);
    
    return 0;
}
