#include <xc.h>
#include "lemos.h"
void __interrupt myISR(void){
    /*Aquí se ejecuta el código de las interrupciones que hayan sucedido,
     *por defecto el XC8 entra siempre en esta interrupción denominada de
     *Alta prioridad
     */
    if(TMR0IF){
        tic_timer0();
    }
}
