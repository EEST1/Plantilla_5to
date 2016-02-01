#include <xc.h>
#include "Ap_ini.h"


/*este código está pensado para inicializar correctamente la placa o shield
1.3 y debe de ser utilizado con cuidado para otras placas o aplicaciones*/


void pic_ini13(void){

    //Borrado de todos los puertos
    LATA = 0x00;
    LATB = 0x00;
    LATC = 0x00;
    LATD = 0x00;
    LATE = 0x00;

    //LEDS y pulsadores

    TRISD = 0xF0;       //RD0 a RD3 salidas RD4 a RD7 entradas
    TRISCbits.RC6 = 0;  //RC6 y RC7 salidas
    TRISCbits.RC7 = 0;

    //Display

    CMCON = 0x07;       //comparadores de entrada deshabilitados
    ADCON1 = 0x0F;      //Conversores AD deshabilitados
    TRISA = 0xC0;       //RA1 a RA5 salidas
    TRISE = 0x00;       //RE0 a RE2 salidas el resto no está implementado

    //Puerto B

    TRISB = 0xFF;       //todas entradas, de ser necesario será configuradas por
                        //el alumno según el mismo necesite
}

void timer_ini13(){
    T0CONbits.TMR0ON = 0;   //apago el timer
    T0CONbits.T08BIT = 1;   //selecciono el timer en 8 bits
    T0CONbits.T0CS = 0;     //el timer cuenta fosc/4
    T0CONbits.PSA = 0;      //habilito el preescaler
    T0CONbits.T0PS0 = 1;    //cargo el preescaler con 256
    T0CONbits.T0PS1 = 1;
    T0CONbits.T0PS2 = 1;
    TMR0L = 209;           //el timer contará 47 fosc/4 * 256 = 12032 * 0,0833us
    TMR0H = 0xFF;           //en total aprox 1.0022ms  casi 1ms
    INTCONbits.TMR0IE = 1;  //Habilita la interrupción de timer 0
}

