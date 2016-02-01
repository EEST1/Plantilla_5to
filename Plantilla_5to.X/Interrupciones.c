#include <xc.h>
#include "lemos.h"
void __interrupt myISR(void){
    /*Aqu� se ejecuta el c�digo de las interrupciones que hayan sucedido,
     *por defecto el XC8 entra siempre en esta interrupci�n denominada de
     *Alta prioridad
     */
    if(TMR0IF){
        tic_timer0();
    }
}
