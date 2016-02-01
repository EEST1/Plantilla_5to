/*
 * Archivo:   main.c
 * Autor: Esteban Lemos
 * Creado en 31 de enero de 2016, 21:05
 * En caso de necesitar el proyecto completo ingresar en
 * https://github.com/EEST1
 */
 
#include <xc.h>
#include "confbits.h"   //no se debe de modificar este archivo para
                        //garantizar el funcionamiento del BOOTLOADER

void main(void) {
    //Aqu� debemos declarar todas las variables:
    unsigned char ejemplo=0; 
    //luego se indican aquellas acciones que suceden una unica vez.
    while(1){   
        
        //escriba el c�digo aqui (ser�n acciones que se repetir�n ciclicamente)
    
    }
}

void __interrupt myISR(void){
    /*Aqu� se ejecuta el c�digo de las interrupciones que hayan sucedido,
     *por defecto el XC8 entra siempre en esta interrupci�n denominada de
     *Alta prioridad
     */
    
}

