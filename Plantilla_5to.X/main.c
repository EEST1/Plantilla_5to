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

/*Evaluación 21 de Febrero 2017
 *
 * Enunciado:
 *****************
 * 1-->Accionando el pulsador colocado en RD4, se de inicio al parpadeo de
 * un LED conectado en LC7 con un tiempo entre el encendido y el apagado de 
 * 1 segundo.
 * 
 * 2-->Accionando el pulsador colocado en RD5, se inicie la cuenta de cantidad
 * de veces que se ha encendido el LED del punto anterior. 
 * 
 * 2.1-->La cuenta es válida desde el momento que se acciona el pulsador.
 *  
 * 2.2-->El valor de la misma se muestra en el display DS1.
 * 
 * 3-->Accionando el pulsador conectado en RD6, se detiene el parpadeo y por 
 * consiguiente la cuenta, tanto el LED, como el valor de la cuenta se mantienen 
 * en el estado en el que se encontraban al momento de accionar el pulsador.
*/
//definiciones de macros
#define LED LATCbits.LC7

//variables globales
char ejemplo=0;
void main(void) {
//configuración Entradas y Salidas

TRISD = 0xF0; //nibble superior del puerto D como entradas

//Sugerencia Configuración TMR0 1Seg


T0CONbits.TMR0ON=1;      //enciendo el timer        

//Limpieza de puertos
LATA =0;
LATC =0;
LATD =0;
//variables locales    
    while(1){   
    //Punto1
    //Punto2
    //Punto3
    }
}

void __interrupt myISR(void){
    /*Aquí se ejecuta el código de las interrupciones que hayan sucedido,
     *por defecto el XC8 entra siempre en esta interrupción denominada de
     *Alta prioridad
     */
    if(TMR0IF){         //la interrupcion ocurre cada 1 segundo.
        TMR0IF=0;       //se reinicia el timer y su interrupcion.
        //Su codigo por favor!!   
    }
}