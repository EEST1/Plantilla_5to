#include <xc.h>
#include "Ap_ini.h"
#include "lemos.h"

//algunas funciones para tomar de ejemplo


void leds(unsigned int velocidad){
    static unsigned char i=1;


    switch(i){
        case 1:if(!led_tout){
            LED1=~LED1;
            led_tout = velocidad;
            i++;
        }
        break;
        case 2:if(!led_tout){
            LED2=~LED2;
            led_tout = velocidad;
            i++;
        }
        break;
        case 3:if(!led_tout){
            LED3=~LED3;
            led_tout = velocidad;
            i++;
        }
        break;
        case 4:if(!led_tout){
            LED4=~LED4;
            led_tout = velocidad;
            i=1;
        }
        break;
        default : {
            led_tout = 1000;
            i=1;
        }
    }
}
void Send_Disp(unsigned char NroDisp,unsigned char Dato){

    LATA = 0;           //Borro el dato

    DISP1 = 0;
    DISP2 = 0;
    DISP3 = 0;
    DISP4 = 0;

    switch(NroDisp){
        case 1:{
            DISP1 = 1;
        }break;
        case 2: {
            DISP2 = 1;
        }break;
        case 3: {
            DISP3 = 1;
        }break;
        case 4: {
            DISP4 = 1;
        }break;
        default :{
            DISP1 = 1;
        }break;
    }
    Dato = Dato & 0x0F;   //borro el nibble superior
    LATA = LATA & 0xF0;   //borro el nibble inferior
    LATA = LATA | Dato;   //copio el nibble inferior de Dato en el puerto A
}

void Send_4Disp(unsigned char Umil,unsigned char Cent,unsigned char Dec,unsigned char Uni){

    static unsigned char Nro_Disp=1;

    switch(Nro_Disp){
        case 1:{
            if(!mux_tout){
                Send_Disp(1,Umil);
                mux_tout = MUX_SET;
                Nro_Disp = 2;
            }
        }
        break;
        case 2:{
            if(!mux_tout){
                Send_Disp(2,Cent);
                mux_tout = MUX_SET;
                Nro_Disp = 3;
            }
        }
        break;
        case 3:{
            if(!mux_tout){
                Send_Disp(3,Dec);
                mux_tout = MUX_SET;
                Nro_Disp = 4;
            }
        }
        break;
        case 4:{
            if(!mux_tout){
                Send_Disp(4,Uni);
                mux_tout = MUX_SET;
                Nro_Disp = 1;
            }
        }
        break;
        default :{
            mux_tout = MUX_SET;
            Nro_Disp = 1;
        }
    }
}
void tic_timer0(void){
    if(mux_tout)mux_tout--;
    if(bot_tout)bot_tout--;
    if(led_tout)led_tout--;
}

