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
    //Aquí debemos declarar todas las variables:
    unsigned char ejemplo=0; 
    //luego se indican aquellas acciones que suceden una unica vez.
    while(1){   
        
        //escriba el código aqui (serán acciones que se repetirán ciclicamente)
    
    }
}

void __interrupt myISR(void){
    /*Aquí se ejecuta el código de las interrupciones que hayan sucedido,
     *por defecto el XC8 entra siempre en esta interrupción denominada de
     *Alta prioridad
     */
    
}

