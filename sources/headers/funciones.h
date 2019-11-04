//
//  funciones.h
//  
//
//  Created by Andres Iglesias Aguilera on 04/11/2019.
//

#ifndef funciones_h
#define funciones_h


#endif /* funciones_h */

// Esta función simplente devuelve el número de ocurrencias de un carácter en una cadena de los tales.
unsigned long Ocurrencias(const char *cadena, const char caracter) {
   
    unsigned long Numero = 0;
        
    for (int i = 0; i < strlen(cadena); i++) {
        if ( cadena[i] == caracter )
            Numero++;
    }
    return Numero;
}

